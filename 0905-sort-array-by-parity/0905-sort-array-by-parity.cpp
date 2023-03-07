class Solution
{
    public:
        vector<int> sortArrayByParity(vector<int> &nums)
        {
           	//#1
           	//             vector < int>res;
           	//             int n = nums.size();
           	//             for(int i =0;i < n;i++){
           	//                 if(nums[i]%2 == 0){
           	//                     res.push_back(nums[i]);
           	//                 }
           	//             }
           	//             for(int i =0;i < n;i++){
           	//                 if(nums[i]%2 != 0){
           	//                     res.push_back(nums[i]);
           	//                 }
           	//             }

           	//             return res;

           	//#2 - Two pointer &swap
            int left = 0;
            int right = nums.size() - 1;

            while (left < right)
            {
                if (nums[left] % 2 != 0)
                {
                    swap(nums[left], nums[right]);
                    right--;
                }
                else
                {
                    left++;
                }
            }
            
            return nums;
        }
};