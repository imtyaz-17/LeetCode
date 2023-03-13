/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        TreeNode* invertTree(TreeNode *root)
        {
            stack < TreeNode* > stk;
            stk.push(root);

            while (!stk.empty())
            {
                TreeNode *node = stk.top();
                stk.pop();
                
                if(node != NULL){
                    stk.push(node->left);
                    stk.push(node->right);
                    
                    swap(node->left, node->right);
                }
            }
            
            return root;
        }
};

//**
// https://youtu.be/6EE_cUgEAaU