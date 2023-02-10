class Solution {
public:
    string customSortString(string order, string s) {
        map<char,int>freq;
        
        for(auto x:s)
            freq[x]++;
        string ans="";
        
        for(auto x:order){
            if(freq.find(x) != freq.end()){
                auto temp = freq.find(x);
                int count = temp->second;
                string s(count, x);
                ans+=s;
                freq.erase(x);
            }
        }
        
        for(auto x:freq){
            string s(x.second, x.first);
            ans+=s;
        }
        
        return ans;
    }
};

//**
// https://youtu.be/z4KYZGv7L-I