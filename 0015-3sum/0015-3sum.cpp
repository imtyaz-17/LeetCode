class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       
        int i,sz =nums.size();
        if(sz <3) return {};
        vector<vector<int>> result;
         sort(nums.begin(), nums.end());
        
        for(i =0; i<sz-2;i++){
            if(i == 0 || nums[i-1] != nums[i]){
            int left = i+1;
            int right = sz-1;
            
            while(left <right){
                int sum =nums[i]+nums[left]+nums[right];
                if(sum == 0){
                    result.push_back({nums[i],nums[left], nums[right]});
                    
                    //duplicate triplets handling
                    while(left <right && nums[left] == nums[left+1]){  
                        left++;
                    }
                        
                    while(left <right && nums[right] == nums[right-1]){
                        right--;
                    }
                    left++;
                    right--;
                }
                else if(sum <0)
                    left++;
                else
                    right--;
            }
        }
    }
        
        return result;
    }
};