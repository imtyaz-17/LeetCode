class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
//        unordered_map<int, int> mp;
        
//         for(int x:nums)
//             mp[x]++;
//         for(int x:nums){
//             if(mp[x]>=2)
//                 return true;
//         }
        
//         return false;
//    
        
        sort(nums.begin(),nums.end());
        int sz =nums.size();
        for(int i=0;i<sz-1;i++){
            if(nums[i]==nums[i+1]){
                return true;
            }
        }
         return false;
    }
};



/**
 * Explanation:
 *https://www.youtube.com/watch?v=7uT0C4ltKE4
 */