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
        int diameter_nodes = 0;
    int height(TreeNode *root)
    {
        if (root == NULL) return 0;

        int lh = height(root->left);
        int rh = height(root->right);

        diameter_nodes = max(diameter_nodes, 1 + lh + rh);

        return max(lh, rh) + 1;
    }
    int diameterOfBinaryTree(TreeNode *root)
    {
        height(root);
        int longest_path = diameter_nodes - 1;
        return longest_path;
    }
};

//**
// https://youtu.be/L4_ReIAqLeQ