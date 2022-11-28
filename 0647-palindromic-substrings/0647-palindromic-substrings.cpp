class Solution
{
    public:
        int countSubstrings(string s)
        {
            int n = s.size();
            if(n==0) return 0;
            bool dp[n][n];
            int count = 0;
            
            for(int len =1;len<=n;len++){
                for(int i=0,j=i+len-1;j<n;i++,j++){
                    if(len==1){
                        dp[i][i] =true;
                        count++;
                    }
                    else if(len==2){
                        dp[i][i+1]=s[i]==s[i+1];
                        if(dp[i][i+1]){
                            count++;
                        }
                    }
                    else{
                        dp[i][j]=(s[i]==s[j] && dp[i+1][j-1]);
                        if(dp[i][j]){
                            count++;
                        }
                    }
                }
            }
            

            return count;
        }
};