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
        void preOrder(vector<int> &preOrderNodes, TreeNode *root) {
            if(root != NULL){
                preOrderNodes.push_back(root->val);
                preOrder(preOrderNodes, root->left);
                preOrder(preOrderNodes, root->right);
            }
        }
    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> preOrderNodes;

        preOrder(preOrderNodes, root);
        return preOrderNodes;
    }
};