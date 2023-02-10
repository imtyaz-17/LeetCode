class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> u_map;
        vector<vector<string>> ans;
        
        for(string s : strs){
            string temp = s;
            sort(s.begin(), s.end());
            u_map[s].push_back(temp);
        }
        
        for(auto x : u_map){
           // vector<string>temp =x.second;
            ans.push_back(x.second);
        }
        
        return ans;
    }
};

//**
// https://youtu.be/zX9k1XvVUXI