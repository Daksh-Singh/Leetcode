class Solution:
    def addBinary(self, a: str, b: str) -> str:
        def sumBinary(*bin_digits):
            count_1 = 0
            count_0 = 0
            for x in bin_digits:
                if x == "1":
                    count_1 += 1
                    
            if count_1 == 0:
                ans = carry = 0
            elif count_1 == 1:
                ans = 1
                carry = 0
            elif count_1 == 2:
                ans = 0
                carry = 1
            elif count_1 == 3:
                ans = 1
                carry = 1
            
            return str(ans), str(carry)
        
        a_list = list(a)
        b_list = list(b)
        
        la = len(a_list)
        lb = len(b_list)
        
        if la>lb:
            b_list = ["0"]*(la-lb) + b_list
        elif lb>la:
            a_list = ["0"]*(lb-la) + a_list

        
        ans = []
        carry = "0"
        while a_list and b_list:
            bit_ans, carry = sumBinary(a_list.pop(), b_list.pop(), carry)
            ans.insert(0, bit_ans)
        
        if carry == "1":
            ans.insert(0, carry)
        return "".join(ans)