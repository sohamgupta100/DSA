class Solution:
    def isPalindrome(self, s: str) -> bool:
        
        punctuations = '''"'`~!@#$%^&*{}()[]",:;.-_\/?'''
        space = ' '

        # for removing the spaces, punctuations and storing in this empty string
        new_s = ''

        for char in s.lower():
            if char not in punctuations and char not in space:
                new_s = new_s + char
        
        print(new_s)
        size = len(new_s)

        # reversing and comparing with the original new_s
        if new_s != new_s[::-1]:
            return False
        
        return True
