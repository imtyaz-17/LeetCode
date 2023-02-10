class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(auto x:nums)
            freq[x]++;
        
        sort(nums.begin(), nums.end(), [&](int a, int b){
            return freq[a] != freq[b] ? freq[a]<freq[b] : a>b ; 
        });
        
        return nums;
    }
};

//**
// https://youtu.be/PjKjbpI2Z3s