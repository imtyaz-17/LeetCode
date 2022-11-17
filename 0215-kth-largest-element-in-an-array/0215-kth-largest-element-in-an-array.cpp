class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i,ln=nums.size();
        return (nums[ln -k]); 
    }
};



/**
 * Explanation:
 *https://www.youtube.com/watch?v=FylOB6ySUDY
 */