/*
Remove duplicates from an unsorted linked list

Given an unsorted linked list of N nodes. The task is to remove duplicate elements from this unsorted Linked List. When a value appears in multiple nodes, the node which appeared first should be kept, all others duplicates are to be removed.

Example 1:

Input:
N = 4
value[] = {5,2,2,4}
Output: 5 2 4
Explanation:Given linked list elements are
5->2->2->4, in which 2 is repeated only.
So, we will delete the extra repeated
elements 2 from the linked list and the
resultant linked list will contain 5->2->4

Example 2:

Input:
N = 5
value[] = {2,2,2,2,2}
Output: 2
Explanation:Given linked list elements are
2->2->2->2->2, in which 2 is repeated. So,
we will delete the extra repeated elements
2 from the linked list and the resultant
linked list will contain only 2.
*/

/*
The structure of linked list is the following

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
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates(Node *head) 
    {
        unordered_set<int> seen;
        struct Node * curr = head;
        struct Node * before = NULL;
        struct Node * after = NULL;
        
        while(curr != NULL)
        {   
            // if we find the same value of 'curr->data' in the hashmap before reaching the end of the 'seen' hashmap
            // if there is a duplicate 
            if(seen.find(curr->data) != seen.end())
            {
                // pointing to the address of node which is immediately after the current node 
                after = curr->next;
                // linking the 'before' node with the 'after' node
                // removing the 'curr' node in between
                before->next = after;
                
                delete(curr);
            }
            
            // if we don't find the same value of 'curr->data' in the hashmap
            else
            {
                // it is a new value
                // add to the hashmap
                seen.insert(curr->data);
                before = curr;
            }
            
            curr = curr->next;
        }
        
        return head;
    }
};
