class Solution
{
    public:
        vector<int> previous_smaller(vector<int> &heights)
        {
            vector<int> ans;
            stack<int> stk;

            int n = heights.size();

            for (int i = 0; i < n; i++)
            {

                while (stk.empty() == false && heights[stk.top()] >= heights[i])
                {
                    stk.pop();
                }

                int ele = (stk.empty()) ? -1 : stk.top();
                ans.push_back(ele);
                stk.push(i);
            }

            return ans;
        }

    vector<int> next_smaller(vector<int> &heights)
    {
        vector<int> ans;
        stack<int> stk;

        int n = heights.size();

        for (int i = n - 1; i >= 0; i--)
        {

            while (stk.empty() == false && heights[stk.top()] >= heights[i])
            {
                stk.pop();
            }

            int ele = (stk.empty()) ? n : stk.top();
            ans.push_back(ele);
            stk.push(i);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    int largestRectangleArea(vector<int> &heights)
    {
        int n = heights.size();
        int res = 0;
        vector<int> ps = previous_smaller(heights);
        vector<int> ns = next_smaller(heights);

        for (int i = 0; i < n; i++)
        {
            int curr = (ns[i] - ps[i] - 1) *heights[i];
            res = max(res, curr);
        }
        return res;
    }
};

//**
// https://youtu.be/hs-wL4xxI1A