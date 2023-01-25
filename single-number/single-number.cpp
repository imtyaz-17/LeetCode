class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
//         unordered_map<int ,int>mp;
        
//         for(int i:nums)
//             mp[i]++;
        
//         for(auto it:mp){
//             if(it.second==1){
//                 return it.first;
//             }
//         }
        
//         return -1;
        
        
        int ans = 0;
        for(int x: nums) {
            ans ^= x;
        }
        return ans;
    }
};