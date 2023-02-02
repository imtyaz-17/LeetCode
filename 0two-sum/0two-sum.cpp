class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
 //#1       
//         unordered_map<int,int> mp;
//         vector<int> ans;
//         for(int i=0;i<nums.size();i++)
//         {
//             if(mp.find(target-nums[i])!=mp.end())
//             {
//                 ans.push_back(mp[target-nums[i]]);
//                 ans.push_back(i);
//                 return ans;
//             }
//             mp[nums[i]]=i;
//         }
//         return ans;
        
        
//#2 - Two pointer
        vector<int> sorted_nums(nums);
        sort(sorted_nums.begin(),sorted_nums.end());
        vector<int> result;
       
        int n=nums.size();
        
        int left = 0 , right = n-1;
        int sum;
        
        while(left < right){
            sum=sorted_nums[left]+sorted_nums[right];
            if(sum==target){
                for (int i = 0; i < nums.size(); i++) {
                    if (nums[i] == sorted_nums[left]) {
                        result.push_back(i);
                        break;
                    }
                }
                for (int i = nums.size() - 1; i >= 0; i--) {
                    if (nums[i] == sorted_nums[right]) {
                        result.push_back(i);
                        break;
                    }
                }
                    break;
            }
            else if(sum>target)
                right--;
            else
                left++;
        }
        
        return result;
    }
};