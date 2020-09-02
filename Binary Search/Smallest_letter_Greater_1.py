class Solution(object):
    def nextGreatestLetter(self, letters, target):
        low = 0
        high = len(letters) - 1
        index = -1
        while low <= high:
            mid = int((high + low) / 2)
            if letters[mid] > target:
                index = mid
                high = mid - 1
            else:
                low = mid + 1
        if index == -1:
            return letters[0]
        else:
            return letters[index]