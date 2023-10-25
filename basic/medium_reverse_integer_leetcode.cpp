/*
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
 

Constraints:

-2^31 <= x <= 2^31 - 1
*/

class Solution {
public:
    int reverse(int x) 
    {
        int num = x;
        int digit = 0;
        long rev_num = 0;

        while(num != 0)
        {
            digit = num % 10;
            num = num / 10;
            rev_num = rev_num * 10 + digit;
        }    

        if (rev_num >= pow(2,31)-1 || rev_num <= -pow(2,31))
        {
            return 0;
        }

        return rev_num;
    }
};
