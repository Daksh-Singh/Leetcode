class Solution:
    def chalkReplacer(self, chalk: List[int], k: int) -> int:
        sum1 = sum(chalk);
        check = 0
        if(k < sum1):
            check = k
        else:
            left = k % sum1
            if(left == 0):
                return 0
            else: 
                check = left
        for i in range(len(chalk)):
            check = check - chalk[i]
            if(check < 0):
                return i
        return 0
        