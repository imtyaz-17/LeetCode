/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *   int val;
 *   TreeNode * left;
 *   TreeNode * right;
 *   TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *   TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        vector<int> rightSideView(TreeNode *root)
        {
            vector<int> ans;

            if (root == NULL) return ans;

            queue<TreeNode *> q;
            q.push(root);

            while (!q.empty())
            {
                int lvl_size = q.size();

                int data;

                while (lvl_size > 0)
                {
                    TreeNode *temp = q.front();
                    q.pop();

                    data = temp->val;

                    if (temp->left != NULL)
                        q.push(temp->left);
                    if (temp->right != NULL)
                        q.push(temp->right);
                    
                    lvl_size--;
                }
                
                ans.push_back(data);
            }

            return ans;
        }
};