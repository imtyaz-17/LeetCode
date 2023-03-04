/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *  int val;
 *  TreeNode * left;
 *  TreeNode * right;
 *  TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        void preOrder(TreeNode *root, vector<int> &preOrderNodes)
        {
            if (root != NULL)
            {
                preOrderNodes.push_back(root->val);
                preOrder(root->left, preOrderNodes);
                preOrder(root->right, preOrderNodes);
            }
            else
            {
                preOrderNodes.push_back(100000);
            }
        }
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        vector<int> preP, preQ;
        preOrder(p, preP);
        preOrder(q, preQ);

        if (preP == preQ) return true;
        else
            return false;
    }
};