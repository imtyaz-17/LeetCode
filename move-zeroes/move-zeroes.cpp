class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len = nums.size();
        
        int zeroCount=0;
        int j=0;
        for(int i=0;i<len;i++){
            if(nums[i]!=0){
                nums[j]=nums[i];
                j++;
            }
            else{
                zeroCount++;
            }
        }
        
        for(int i=0;i<zeroCount;i++){
            nums[j++]=0;
        }
    }
};