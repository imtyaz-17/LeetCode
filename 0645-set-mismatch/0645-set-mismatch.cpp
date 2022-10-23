class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        int duplicate, missing;
        int arr[nums.size()+1];
        
       // arr[nums.size()] ={0};
        
        for(int i=0;i<=nums.size();i++){
            arr[i]=0;
        }
        for(int i=0;i<nums.size();i++){
            arr[nums[i]]++;
        }
        
        for(int i=1;i<=nums.size();i++){
            if(arr[i]==0){
                missing =i;
            }
            else if(arr[i]==2){
                duplicate = i;
            }  
        }
        ans.push_back(duplicate);
        ans.push_back(missing);
        
        return ans;
    }
};