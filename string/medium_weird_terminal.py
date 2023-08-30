'''
Problem Statement : 
(Asked in OnCampus Drive August, 2023)

Here is a weird problem in Susan’s terminal. He can not write more than two words each line, if she writes more than two, it takes only 2 words and the rest are not taken. So she needs to use enter and put the rest in a new line. For a given paragraph, how many lines are needed to be written in Susan’s terminal?

Input Format:
A string as the text to input in the terminal

Output Format:
Number of lines written.

Constraints:
Number of words <=10^7

Sample Input:
How long do you have to sit dear ?

Sample Output:
4

Explanation:
The writing will be:
How long
Do you
Have to
Sit dear ?
'''

import string

def transform_and_count(text):
    
    # Removing punctuations
    text_without_punc = ''.join([char for char in text if char not in string.punctuation])
    print('After removing punctuations:', text_without_punc)
    
    words = text_without_punc.split()
    print('After splitting into words:', words)
    
    return len(words)//2
    
text = 'How long do you have to sit dear ?'
ans = transform_and_count(text)
print('Number of lines:', ans)
