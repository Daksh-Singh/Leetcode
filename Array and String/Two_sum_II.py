class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        lowIndex = 0                                                               
        highIndex = len(numbers)-1
        while (lowIndex < highIndex):
            temp = numbers[lowIndex] + numbers[highIndex]                                 
            if temp == target:
                return [lowIndex+1, highIndex+1]
            if temp < target:                                                                
                lowIndex+=1
            else:
                highIndex-=1
        return []
        