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
        vector<vector < int>> zigzagLevelOrder(TreeNode *root)
        {
            vector<vector < int>> ans;
            if (root == NULL) return ans;

            queue<TreeNode*> q;
            q.push(root);
            int level_count = 0;

            while (!q.empty())
            {
                int level_size = q.size();

                level_count++;
                vector<int> level_data;
                while (level_size > 0)
                {
                    TreeNode *temp = q.front();
                    q.pop();

                    level_data.push_back(temp->val);
                    
                    if (temp->left != NULL)
                        q.push(temp->left);
                    if (temp->right != NULL)
                        q.push(temp->right);

                    level_size--;
                }
                
                if(level_count %2==0)
                    reverse(level_data.begin(), level_data.end());
                
                ans.push_back(level_data);
            }
            
            return ans;
        }
};

//**
// https://youtu.be/pgc-Mo_1E58