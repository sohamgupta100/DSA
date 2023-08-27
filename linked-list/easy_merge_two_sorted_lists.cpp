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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        // Ptr points towards the smaller of the 2 values
        // in the 2 starting nodes of the 2 linked lists
        ListNode * ptr = NULL;

        // Curr is the new merged and sorted linked list that we create
        ListNode * curr = NULL;
        
        // if the first list1 is null, return list2 
        if(list1 == NULL)
        {
            return list2;
        }

        if(list2 == NULL)
        {
            return list1;
        }

        // if the value in the starting node of list1 is greater than the 
        // value in the starting node of list2
        if(list1->val < list2->val)
        {
            ptr = list1;
            list1 = list1->next;
        }

        else
        {
            ptr = list2;
            list2 = list2->next;
        }

        // Ptr will act as the head of the new sorted linked list
        // while curr will keep traversing until the list is complete
        curr = ptr;

        while(list1 != NULL && list2 != NULL)
        {
            // if the value of list1 is greater than that of list2
            // add that particular node of list1 as the next node
            // of the linked list curr

            if(list1->val < list2->val)
            {
                curr->next = list1;
                list1 = list1->next;
            }

            // if the value of list2 is greater than that of list1
            // add that particular node of list2 as the next node
            // of the linked list curr

            else
            {
                curr->next = list2;
                list2 = list2->next;
            }
            
            // move the curr pointer to its next node
            curr = curr->next;
        }

        // if list1 is smaller than list2 and the traversal gets complete
        // connect the remaining elements of link2 to the last node of curr
        if(!list1)
        {
            curr->next = list2;
        }

        else
        {
            curr->next = list1;
        }

        return ptr;
    }
};
