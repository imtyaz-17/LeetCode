class Solution {
public:
    
    bool static compare(pair<int,string>p1, pair<int,string>p2){
        if(p1.first == p2.first)
            return p1.second< p2.second;
        
        return p1.first> p2.first;  
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> freq;
        
        for(auto word:words)
            freq[word]++;
        
        vector<pair<int,string>> vecp;
        for(auto key: freq){
            vecp.push_back({key.second, key.first});
        }
        
        sort(vecp.begin(), vecp.end(),compare);
        
        vector<string> ans;
        for(int i =0;i<k;i++){
            ans.push_back(vecp[i].second);
        }
        
        return ans;
    }
};





/**
 * Explanation:
 * https://www.youtube.com/watch?v=oF3D2t4UULQ
 */