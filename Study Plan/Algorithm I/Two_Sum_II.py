class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        low, high = 0, len(numbers) - 1
        while low <= high:
            temp = numbers[low] + numbers[high]
            if temp == target:
                return [low + 1, high + 1]
            elif temp < target:
                low += 1
            else:
                high -= 1
        return []
        