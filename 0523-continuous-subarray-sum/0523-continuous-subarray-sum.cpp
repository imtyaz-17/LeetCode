class Solution
{
    public:
        bool checkSubarraySum(vector<int> &nums, int k) {
           int sum=0,pre=0;
            if(nums.size()<2) return false;
            
            set<int>set1;
            
            for(int i=0;i<nums.size();i++){
                sum+=nums[i];
                int mod =  k == 0 ? sum : sum % k;
                if(set1.count(mod)) return true;
                
                set1.insert(pre);
                pre = mod;
            }
            return false;    
        }
};