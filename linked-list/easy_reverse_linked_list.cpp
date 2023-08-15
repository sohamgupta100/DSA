/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* reverseList(ListNode* head)
    {   
        // points to the current node
        struct ListNode* curr = head;
        // points to the node which comes before the curr pointer 
        struct ListNode* before = NULL;
        // points to the node which comes after the curr pointer
        struct ListNode* after = NULL;

        while(curr != NULL)
        {   
            // place the 'after' pointer on the node after the 'curr' pointer
            after = curr -> next;
            // update the link of the node to which 'curr' is pointing
            // choose the previous node / the node before as the next node
            curr -> next = before;

            // update before to curr
            before = curr;
            // shift curr by 1 node
            // update curr to after
            curr = after;
        }

        // last node / tail node becomes the head node after reversing all the nodes successfully
        head = before;

        return head;
    }
};
