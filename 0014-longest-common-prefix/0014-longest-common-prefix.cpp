class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int sz = strs.size();
        
        if(sz==0) return "";
        
        sort(strs.begin(), strs.end());
        
        int minlength = min(strs[0].size(), strs[sz-1].size());
        
        string first = strs[0], last = strs[sz-1];
        
        int i=0;
        
        while(i< minlength && first[i] == last[i])
            i++;
        
        string prefix = first.substr(0,i);
        
        return prefix;
    }
};