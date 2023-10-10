class Solution:
    def romanToInt(self, s: str) -> int:
        
        roman_to_num = {
            
            'I' : 1,
            'V' : 5,
            'X' : 10,
            'L' : 50,
            'C' : 100,
            'D' : 500,
            'M' : 1000,   
        }

        ans = 0

        for i in range(len(s)):
            
            if i < len(s) - 1 and roman_to_num[s[i]] < roman_to_num[s[i+1]]:
                ans = ans - roman_to_num[s[i]]

            else:
                ans = ans + roman_to_num[s[i]]  
        
        return ans

        # i = len(s) - 1
        # num = 0

        # while i > 0:
            
        #     if s[i] == 'V' and s[i-1] == 'I':
        #         num = num + 4
        #         i-=1
        #         # print('+4')

        #     elif s[i] == 'X' and s[i-1] == 'I':
        #         num = num + 9
        #         i-=1
        #         # print('+9')

        #     elif s[i] == 'L' and s[i-1] == 'X':
        #         num = num + 40
        #         i-=1
        #         # print('+40')

        #     elif s[i] == 'C' and s[i-1] == 'X':
        #         num = num + 90
        #         i-=1
        #         # print('+90')

        #     elif s[i] == 'D' and s[i-1] == 'C':
        #         num = num + 400
        #         i-=1
        #         # print('+400')

        #     elif s[i] == 'M' and s[i-1] == 'C':
        #         num = num + 900
        #         i-=1
        #         # print('+900')

        #     elif s[i] == 'M' and s[i-1] == 'X':
        #         num = num + 990
        #         i-=1
        #         # print('+990')

        #     elif s[i] == 'I':
        #         num = num + 1
        #         # print('+1')
            
        #     elif s[i] == 'V':
        #         num = num + 5
        #         # print('+5')

        #     elif s[i] == 'X':
        #         num = num + 10
        #         # print('+10')

        #     elif s[i] == 'L':
        #         num = num + 50
        #         # print('+50')

        #     elif s[i] == 'C':
        #         num = num + 100
        #         # print('+100')

        #     elif s[i] == 'D':
        #         num = num + 500
        #         # print('+500')
            
        #     elif s[i] == 'M':
        #         num = num + 1000
        #         # print('+1000')

        #     # print(num)
        #     i-=1

        # if i == 0:

        #     if s[i] == 'I':
        #         num = num + 1
        #         # print('+1')
            
        #     elif s[i] == 'V':
        #         num = num + 5
        #         # print('+5')

        #     elif s[i] == 'X':
        #         num = num + 10
        #         # print('+10')

        #     elif s[i] == 'L':
        #         num = num + 50
        #         # print('+50')

        #     elif s[i] == 'C':
        #         num = num + 100
        #         # print('+100')

        #     elif s[i] == 'D':
        #         num = num + 500
        #         # print('+500')
            
        #     elif s[i] == 'M':
        #         num = num + 1000
        #         # print('+1000')
        
        # return num
