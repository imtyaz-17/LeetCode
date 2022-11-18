class Solution {
public:
    int maxProduct(vector<int>& nums) {
         int max_ending = nums[0];
    int min_ending = nums[0];

    int maxSub = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        int temp = max({nums[i], nums[i] * max_ending, nums[i] * min_ending});
        min_ending = min({nums[i], nums[i] * max_ending, nums[i] * min_ending});
        max_ending = temp;

        maxSub = max(maxSub, max_ending);
    }
    return maxSub;
    }
};