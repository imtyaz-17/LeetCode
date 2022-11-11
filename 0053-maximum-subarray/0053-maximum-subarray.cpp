class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size() == 0) return 0;

        int max = INT_MIN;
    int csum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (csum + nums[i] > nums[i])
        {
            csum += nums[i];
        }
        else
        {
            csum = nums[i];
        }

        if (csum > max)
            max = csum;
    }
    return max;
    }
};

/**
 * Explanation:
 *  https://www.youtube.com/watch?v=JeY_0Q88HzM
 */