class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        map<string, int>mp;
        for(int i =0;i<words.size();i++){
            mp[words[i]]++;
        }
        
        int ans=0;
        bool imty=false;
        
        for(auto it: mp){
            string s=it.first;
            string t = s;
            
            reverse(s.begin(), s.end());
            if(s==t){
                ans+=it.second/2;
                
                if(it.second %2){
                    imty=true;
                }
            }else{
                if(mp.count(s)){
                    ans+= min(it.second,mp[s]);
                    mp.erase(s);
                }
            }  
        }
        
        ans*=4;
        if(imty){
            ans+=2;
        }
        
        return ans;
    }
};





/**
 * Explanation:
 *https://www.youtube.com/watch?v=jjtLUDYKa_U
 */