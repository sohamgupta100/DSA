/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
class Solution {
public:
    bool hasCycle(ListNode *head) 
    {
        // if the linked list is a cyclic, the slow and the fast pointers should meet at the same point after traversing certain number of nodes each.

        // slow pointer moves by 1 node
        struct ListNode *slow = head;
        // slow pointer moves by 2 nodes
        struct ListNode *fast = head;
        
        while(fast != NULL && fast -> next != NULL)
        {
            slow = slow -> next;
            fast = fast->next->next;

            // if slow and fast pointers meet after traversing a certain number of nodes each, the linked list is cyclic (true)    
            if (slow == fast)
            {
                return true;
            }
        }

        // if the linked list is not cyclic, the compiler comes out of the while loop after reaching the rightmost end of the node (NULL) and returns false
        return false;
    }
};
