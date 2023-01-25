class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> freq(26);
        int ln = s.size();
        
        for(int i=0;i<ln;i++)
            freq[s[i]-'a']++;
       
        for(int i=0;i<ln;i++){
            if( freq[s[i]-'a']==1){
               return i;
            }
        }
        return -1;
        
    }
};