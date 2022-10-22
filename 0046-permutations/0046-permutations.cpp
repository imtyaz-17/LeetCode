class Solution {
public:
       vector<vector<int>> ans;
    void permute_recursion(vector<int>& nums, int i){
        if(i==nums.size()){
            ans.push_back(nums);
            return;
        }
        int j,sz;
        sz= nums.size();
        for(j=i ;j<sz;j++){
            swap(nums[i], nums[j]);
            permute_recursion(nums,i+1);
            swap(nums[i], nums[j]);
        }
        return;
    }
    vector<vector<int>> permute(vector<int>& nums) {
     
        permute_recursion(nums,0);
        return ans;
    }
};











/**
 * Explanation:
 *https://www.youtube.com/watch?v=b1iFSSxg9Y8&list=PLvg-AaxR3aaZk13DjSEznf848b9lBTeY1&index=9&ab_channel=CodeIn10-NishantChahar
 */