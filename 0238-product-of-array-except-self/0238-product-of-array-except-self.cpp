class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod =1, flag =0;
        int i;
        int ln =nums.size();
        for(i=0;i<ln;i++){
            if(nums[i]==0) flag++;
            else 
                prod*=nums[i];
        }
        vector<int>res(ln);
        
        for(i=0;i<ln;i++){
            if(flag >1) res[i]=0;
            else if(flag==0) res[i] =prod/nums[i];
            else if (flag ==1 & nums[i]!=0) res[i]=0;
            else
                res[i]=prod;
        }
        return res;
    }
};