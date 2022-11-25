class Solution {
public:
    int findLength(string &s, int n,int k, char ch){
	    int maxLen =1, cnt=0,l=0,r=0;
		    while(r<n){
		        if(s[r] != ch){
		            ++cnt;
		        }
		        while(cnt>k){
		            if(s[l] !=ch) --cnt;
		            
		            ++l;
		        }
		        
		        maxLen = max(maxLen, r -l +1);
		        ++r;
		    }
		    return maxLen;
	}
    int characterReplacement(string s, int k) {
        int maxLen =1;
		    int n=s.length();
		    for(int i=0;i<26;i++){
		        maxLen = max(maxLen, findLength(s,n,k,i+'A'));
		    }
		    return maxLen;
    }
};