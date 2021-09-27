class Solution:
	def isPowerOfTwo(self, n: int) -> bool:
		if n <= 0:   return False
		if n == 1:   return True

		for i in range(n):
			if n % 2 == 0 and n != 2:  
				n = n / 2
			elif n == 2:  
				return True
			else:        
				return False
		return True
        