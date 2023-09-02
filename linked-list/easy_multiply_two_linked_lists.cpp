/*
Multiply two linked lists

Given elements as nodes of the two linked lists. The task is to multiply these two linked lists, say L1 and L2. 

Note: The output could be large take modulo 109+7.

Example:

Input:
2
2
3 2
1
2
3
1 0 0
2
1 0 
Output:
64
1000

Explanation:
Testcase 1: 32*2 = 64.
Testcase 2: 100*10 = 1000.
Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow, the first line of each test case contains an integer N denoting the size of the first linked list (L1). In the next line are the space-separated values of the first linked list. The third line of each test case contains an integer M denoting the size of the second linked list (L2). In the fourth line is space-separated values of the second linked list.

Output:
For each test case output will be an integer denoting the product of the two linked lists.

Your Task:
The task is to complete the function multiplyTwoLists() which should multiply the given two linked lists and return the result.
*/

/* Linked list node structure
struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};*/

/*The method multiplies 
two  linked lists l1 and l2
and returns their product*/

/*
Steps of the algorithm:-

1) Initialize a variable to zero
2) Start traversing the linked list
3) Add the value of first node to this variable
4) From the second node, multiply the variable by 10
   and also take modulus of this value by 10^9+7
   and then add the value of the node to this 
   variable.
5) Repeat step 4 until we reach the last node of the list.
*/

long long multiplyTwoLists (Node* l1, Node* l2)
{
    long long N= 1000000007;
    long long num1 = 0, num2 = 0;
    
    while (first || second)
    {
          
        if(l1)
        {
            num1 = ((num1) * 10) % N + first->data;
            first = first->next;
        }
          
        if(l2)
        {
            num2 = ((num2) * 10) % N + second->data;
            second = second->next;
        }
          
    }
    
    return ((num1 % N) * (num2 % N)) % N;
}
