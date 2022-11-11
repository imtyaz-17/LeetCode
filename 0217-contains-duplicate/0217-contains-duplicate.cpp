class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       unordered_map<int, int> mp;
        
        for(int x:nums)
            mp[x]++;
        for(int x:nums){
            if(mp[x]>=2)
                return true;
        }
        
        return false;
    }
};



/**
 * Explanation:
 *https://www.youtube.com/watch?v=7uT0C4ltKE4
 */