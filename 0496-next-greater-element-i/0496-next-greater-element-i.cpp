class Solution
{
    public:
        vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
        {
           	//#1
           	//             int n1 = nums1.size();
           	//             int n2 = nums2.size();

           	//             vector<int> ans;

           	//             for (int i = 0; i < n1; i++)
           	//             {
           	//                 bool flag = false;
           	//                 for (int j = 0; j < n2; j++)
           	//                 {
           	//                     if (nums1[i] == nums2[j]) flag = true;
           	//                     if (flag && nums1[i] < nums2[j])
           	//                     {
           	//                         ans.push_back(nums2[j]);
           	//                         flag = false;
           	//                     }
           	//                 }
           	//                 if (flag) ans.push_back(-1);
           	//             }

           	//             return ans;

           	//#2 - Stack
            unordered_map<int, int> umap;
            stack<int> stk;
            int n = nums2.size();

            for (int i = n - 1; i >= 0; i--)
            {
                int ele = nums2[i];

                while (!stk.empty() && stk.top() <= ele)
                {
                    stk.pop();
                }
                int res = (stk.empty()) ? -1 : stk.top();
                umap.insert({ele, res});
                stk.push(ele);
            }

            vector<int> ans;
            for (auto x: nums1)
            {
                ans.push_back(umap[x]);
            }

            return ans;
        }
};

//**
// https://youtu.be/CzBVZPDo1HI