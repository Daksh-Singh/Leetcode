class Solution:
    def letterCasePermutation(self, s: str) -> List[str]:
        
        def createPermutations(letters, n):
            
            if n >= len(letters):
                return
            
            # Make the current letter lowercase
            letters[n] = letters[n].lower()
            
            # Add to solution
            retval.add("".join(letters))
            
            # Move to next letter
            createPermutations(letters, n + 1)
            
            # Make the current letter uppercase
            letters[n] = letters[n].upper()
            
            # add to solution
            retval.add("".join(letters))

            # Move to next letter
            createPermutations(letters, n + 1)
        
        
        retval = set()

        letters = [letter for letter in s]
        
        createPermutations(letters, 0)
        
        return retval