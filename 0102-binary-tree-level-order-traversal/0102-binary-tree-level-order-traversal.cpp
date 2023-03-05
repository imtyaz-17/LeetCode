/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *int val;
 *TreeNode * left;
 *TreeNode * right;
 *TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        vector<vector < int>> levelOrder(TreeNode *root)
        {
            vector<vector < int>> ans;
            if (root == NULL)
            {
                return ans;
            }

            queue<TreeNode*> q;
            q.push(root);

            while (!q.empty())
            {
                int level_size = q.size();
                vector<int> level_data;

                while (level_size > 0)
                {
                    TreeNode *temp = q.front();
                    q.pop();
                    level_data.push_back(temp->val);

                    if (temp->left != NULL)
                    {
                        q.push(temp->left);
                    }
                    if (temp->right != NULL)
                    {
                        q.push(temp->right);
                    }
                    level_size--;
                }
                ans.push_back(level_data);
            }
            
            return ans;
        }
};
//**
// https://youtu.be/me7AXvWv4jc