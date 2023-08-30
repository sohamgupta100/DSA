/*

Delete without head pointer

You are given a pointer/ reference to the node which is to be deleted from the linked list of N nodes. The task is to delete the node. Pointer/ reference to head node is not given. 
Note: No head reference is given to you. It is guaranteed that the node to be deleted is not a tail node in the linked list.

Example 1:

Input:
N = 2
value[] = {1,2}
node = 1
Output: 2
Explanation: After deleting 1 from the
linked list, we have remaining nodes
as 2.

Example 2:

Input:
N = 4
value[] = {10,20,4,30}
node = 20
Output: 10 4 30
Explanation: After deleting 20 from
the linked list, we have remaining
nodes as 10, 4 and 30.

*/

/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}*head;
*/

class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
       // 'del' => node to be deleted 
       // Instead of deleting that particular node, we can overwrite its data
       // with the data of the next node and then unlink the next node

       
       // Pointing the 'temp' pointer to the address of the node to be deleted (del)
       struct Node * temp = del;
       
       // Make 'temp' point to the address of the next node
       temp = del->next;
       
       // Overwrite the valiye of 'del' with the value in the next node (pointed to by 'temp')
       del->data = temp->data;
       
       // Now that the original value of del has been overwritten and
       // there are duplicates of the vlues originally in the next node
       // remove the next node (pointed to by 'temp')
       del->next = temp->next;
    }
};
