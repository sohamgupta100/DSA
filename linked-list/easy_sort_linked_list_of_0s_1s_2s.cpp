/*
Given a linked list of N nodes where nodes can contain values 0s, 1s, and 2s only. The task is to segregate 0s, 1s, and 2s linked list such that all zeros segregate to head side, 2s at the end of the linked list, and 1s in the mid of 0s and 2s.

Example 1:

Input:
N = 8
value[] = {1,2,2,1,2,0,2,2}
Output: 0 1 1 2 2 2 2 2
Explanation: All the 0s are segregated
to the left end of the linked list,
2s to the right end of the list, and
1s in between.
Example 2:

Input:
N = 4
value[] = {2,2,0,1}
Output: 0 1 2 2
Explanation: After arranging all the
0s,1s and 2s in the given format,
the output will be 0 1 2 2.
Your Task:
The task is to complete the function segregate() which segregates the nodes in the linked list as asked in the problem statement and returns the head of the modified linked list. The printing is done automatically by the driver code.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).
*/

/*
 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) 
    {
        // to store the count of 0s, 1s and 2s
        int count[3] = {0, 0, 0};
        /* 
        count total number of '0', '1' and '2'
        count[0] will store total number of '0's
        count[1] will store total number of '1's
        count[2] will store total number of '2's 
        */
        
        struct Node * ptr = head;
        
        while(ptr != NULL)
        {
            count[ptr->data]++;     
            ptr = ptr->next;
        }
        
        ptr = head;
        int i = 0;
        
        // while we do not reach the end of the linked list
        while(ptr != NULL)
        {
            // move to the next index of the array once the count is 0
            if(count[i] == 0)
            {
                i++;
            }
            
            // keep adding 
            else
            {
                ptr->data = i;
                count[i]--;
                ptr=ptr->next;
            }
            
        }
        
        return head;
    }
};
