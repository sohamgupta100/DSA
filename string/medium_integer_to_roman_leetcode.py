'''
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000

For example, 2 is written as II in Roman numeral, just two one's added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given an integer, convert it to a roman numeral.

Example 1:

Input: num = 3
Output: "III"
Explanation: 3 is represented as 3 ones.

Example 2:

Input: num = 58
Output: "LVIII"
Explanation: L = 50, V = 5, III = 3.

Example 3:

Input: num = 1994
Output: "MCMXCIV"
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.

Constraints:

1 <= num <= 3999
'''

'''
Approach
> To achieve this, I utilize a greedy approach where I repeatedly subtract the largest possible value from the given number while appending the corresponding Roman numeral symbol to the result string. I maintain two arrays: values, which contains the integer values corresponding to Roman numerals, and romanNumerals, which contains the corresponding Roman numeral symbols.
> Starting with the largest value, I iterate through the values array and at each step, I check if the current value can be subtracted from the given number. If it can be, I append the corresponding Roman numeral symbol to the result string and subtract the value from the number. If not, I move on to the next smaller value.
> I continue this process until the given number becomes zero, and the result string represents the Roman numeral equivalent of the original number.

Complexity
Time complexity: O(1)
The algorithm performs a constant number of operations regardless of the magnitude of the input number. The iteration through the values array and the subsequent calculations are independent of the value of the input.

Space complexity: O(1)
The algorithm uses a fixed amount of additional memory space for variables and arrays, leading to a constant space complexity.
'''

class Solution:
    def intToRoman(self, num: int) -> str:
        
        values = [1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1]
        roman = ['M', 'CM', 'D', 'CD', 'C', 'XC', 'L', 'XL', 'X', 'IX', 'V', 'IV', 'I']

        ans = []
        i = 0

        while num > 0:

            if num >= values[i]:
                ans.append(roman[i])
                num = num - values[i]

            else:
                i = i + 1

        return ''.join(ans)
