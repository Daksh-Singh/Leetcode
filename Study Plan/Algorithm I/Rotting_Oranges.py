class Solution:
    def orangesRotting(self, grid: List[List[int]]) -> int:
        m, n = len(grid), len(grid[0])
        # edge case
        if m == 0 and n == 0:
            if grid[0][0] == 1:
                return -1
            else:
                return 0

        orange_num = 0
        rotten_num = 0
        dq = deque([])
        seen = set()
        for i in range(m):
            for j in range(n):
                if grid[i][j] == 0:
                    continue
                else:
                    orange_num += 1
                    if grid[i][j] == 2:
                        rotten_num += 1
                        dq.append((i, j))
                        seen.add((i, j))

        if orange_num == 0:
            # initially there is no oranges
            return 0
        if rotten_num == 0:
            # initially there is no rotten oranges, so impossible
            return -1

        bfs_step = 0
        drs = [(1,0), (0,1), (-1,0), (0,-1)]
        while dq:
            dq_size = len(dq)
            for _ in range(dq_size):
                x, y = dq.popleft()
                for dx, dy in drs:
                    next_x, next_y = x+dx, y+dy
                    if 0 <= next_x < m and 0 <= next_y < n and (next_x, next_y) not in seen \
                        and grid[next_x][next_y] == 1:
                        # found another fresh orange to be rotten
                        dq.append((next_x, next_y))
                        seen.add((next_x, next_y))
                        rotten_num += 1

            bfs_step += 1

        if rotten_num == orange_num:
			# the initial rotten oranges will consume 1 BFS step, so
            # here we will minus this 1 from the final result
            return bfs_step-1
        else:
            return -1