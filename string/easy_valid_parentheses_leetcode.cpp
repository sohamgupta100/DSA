/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type. 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false

Constraints:

1 <= s.length <= 104
s consists of parentheses only '()[]{}'.
*/

/*
STACK APPROACH
Here is the step-by-step approach of the algorithm:

1. Initialize an empty stack.

2. Traverse the input string character by character.

3. If the current character is an opening bracket (i.e., '(', '{', '['), push it onto the stack.

4. If the current character is a closing bracket (i.e., ')', '}', ']'), check if the stack is empty. 
If it is empty, return false, because the closing bracket does not have a corresponding opening bracket. 
Otherwise, pop the top element from the stack and check if it matches the current closing bracket. 
If it does not match, return false, because the brackets are not valid.

5. After traversing the entire input string, if the stack is empty, return true, because all opening 
brackets have been matched with their corresponding closing brackets. Otherwise, return false, because 
some opening brackets have not been matched with their corresponding closing brackets.
*/

class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> st;

        for (char c : s)
        {
            if(c == '(' || c == '{' || c == '[')
            {
                st.push(c);
            }

            else
            {
                if(st.empty() || 
                (c == ')' && st.top() != '(') || 
                (c == '}' && st.top() != '{') || 
                (c == ']' && st.top() != '['))
                {
                    return false;
                }

                st.pop();
            } 
        }

        return st.empty();    
    }
};
