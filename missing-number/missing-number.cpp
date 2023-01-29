class Solution {
public:
    int missingNumber(vector<int>& nums) {
// #1 - Bit Manipulation.          
        int miss = 0;
        for (int i = 0; i < nums.size(); i ++) {
            miss = miss ^ nums[i];
            miss = miss ^ i+1;
        }
        
        return miss;
        
// #2        
//         vector<bool>vec(nums.size()+1);
        
//         for(int i =0;i<nums.size();i++){
//             vec[nums[i]]=true;
//         }
//         for(int i =0;i<vec.size();i++){
//             if(!vec[i])
//                 return i;
//         }
//         return -1;
    }
};