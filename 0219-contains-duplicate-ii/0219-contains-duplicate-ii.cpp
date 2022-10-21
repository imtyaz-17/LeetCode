class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> mp;
        int sz= nums.size();
        for(int i =0;i<sz;i++){
            if(mp.count(nums[i]))
                if(abs(i-mp[nums[i]]) <=k)
                    return true;
            
            mp[nums[i]] =i;
        }
        return false;
    }
};



/**
 * Explanation:
 *https://www.youtube.com/watch?v=yHIEUkW6BnY
 */