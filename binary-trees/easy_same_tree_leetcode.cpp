/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
        return helper(p,q);
    }

    bool helper(TreeNode* p, TreeNode* q)
    {
        bool l = 0;
        bool r = 0;

        if(p==NULL && q==NULL)
            return true;
        
        else if(p==NULL && q!=NULL)
            return false;
        
        else if(p!=NULL && q==NULL)
            return false;
        
        else
        {
            l = helper(p->left, q->left);
            r = helper(p->right, q->right);
            // cout<<"Left = "<<l<<" Right = "<<r<<endl;

            bool x = p->val == q->val;
            
            return (p->val == q->val) && l && r;
        }
    }
};
