class Solution:
    def builder(self, arr, cur_arr, k, ans):
        if len(cur_arr) == k:
            ans.append(cur_arr)
            return
        
        for i in range(len(arr)):
            self.builder(arr[i+1:], cur_arr + [arr[i]], k, ans)
        
        
    def combine(self, n: int, k: int) -> List[List[int]]:
        arr = []
        ans = []
        for i in range(1, n + 1):
            arr.append(i)
        
        
        self.builder(arr, [], k, ans)
        
        return ans   