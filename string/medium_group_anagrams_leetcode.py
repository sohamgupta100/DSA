'''
Given an array of strings strs, group the anagrams together. You can return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, 
typically using all the original letters exactly once.

Example 1:

Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
Example 2:

Input: strs = [""]
Output: [[""]]
Example 3:

Input: strs = ["a"]
Output: [["a"]]

Constraints:

1 <= strs.length <= 104
0 <= strs[i].length <= 100
strs[i] consists of lowercase English letters.
'''

class Solution(object):
    def groupAnagrams(self, strs):
        
        if len(strs) <= 1:
            return strs

        # final
        final_list = []
        anagrams = []

        # while 'strs' list is not empty/null
        while strs:
            
            sorted_str_first = ''.join(sorted(strs[0]))
            anagrams.append(strs[0])
            strs.remove(strs[0])

            for i in range(1, len(strs)):
                
                # print("LOOP", i)
                sorted_str = ''.join(sorted(strs[i]))
                
                if sorted_str_first == sorted_str:
                    anagrams.append(strs[i])
                    strs.remove(strs[i])
            
            final_list.append(anagrams)
            anagrams = []
        
        return final_list

        print(len(strs))

'''
class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        
        # will store the sorted value as key and its original strings as values
        dic = {}

        for i in strs:
            
            word = ''.join(sorted(i))
            
            # if word is already in dictionary as key
            # append the original unsorted string to the sub list
            if word in dic:
                dic[word].append(i)

            # if word is not in dictionary
            # create a sub list and add it there
            else:
                dic[word] = [i]

        return list(dic.values())
'''



