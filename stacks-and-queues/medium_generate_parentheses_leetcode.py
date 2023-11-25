'''
Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

Example 1:

Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]
Example 2:

Input: n = 1
Output: ["()"]
 

Constraints:

1 <= n <= 8
'''

class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        
        # left implies left bracket count
        # right implies right bracket count

        def dfs(left, right, s):
            
            if len(s) == n*2:
                res.append(s)
                return

            if left < n:
                dfs(left + 1, right, s + '(')

            if left > right:
                dfs(left, right + 1, s + ')')

        res = []
        dfs(0, 0, '')

        return res
