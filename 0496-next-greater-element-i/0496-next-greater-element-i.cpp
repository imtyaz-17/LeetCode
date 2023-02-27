class Solution
{
    public:
        vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
        {
            int n1 = nums1.size();
            int n2 = nums2.size();

            vector<int> ans;

            for (int i = 0; i < n1; i++)
            {
                bool flag = false;
                for (int j = 0; j < n2; j++)
                {
                    if (nums1[i] == nums2[j]) flag = true;
                    if (flag && nums1[i] < nums2[j])
                    {
                        ans.push_back(nums2[j]);
                        flag = false;
                    }
                }
                if (flag) ans.push_back(-1);
            }

            return ans;
        }
};