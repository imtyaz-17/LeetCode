class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int n = arr1.size();
        int m = arr2.size();
        
        map<int,int>freq;       
        for(auto x:arr1){
            freq[x]++;
        }
        vector<int> ans;
        for(auto x:arr2){
            if(freq.find(x)!= freq.end()){
                auto element = freq.find(x);
                int count = element->second;
                vector<int>v(count,x);
                
                ans.insert(ans.end(), v.begin(), v.end());
                freq.erase(x);
            }
        }
        
        for(auto x:freq){
            int element = x.first;
            int count =x.second;
            
            vector<int>v(count,element);
            ans.insert(ans.end(), v.begin(), v.end());

        }
        
        return ans;
    }
};

//**
// https://youtu.be/bNuMPAuQN4g