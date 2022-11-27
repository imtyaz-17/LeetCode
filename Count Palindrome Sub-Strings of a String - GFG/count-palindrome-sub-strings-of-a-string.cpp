//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int CountPS(char S[], int N);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        char S[N+1];
        cin>>S;
        cout<<CountPS(S,N)<<endl;
    }
    return 0;
}


// } Driver Code Ends


int dp[1001][1001];
bool isPal(string s, int i,int j){
        if(i>j) return 1;
        if(dp[i][j] != -1) return dp[i][j];
        if(s[i] != s[j])  return dp[i][j] =0;
        
        return dp[i][j] = isPal(s,i+1,j-1);
    }
int CountPS(char S[], int N)
{
    //code here
    memset(dp, -1, sizeof(dp));
    
    int count =0;
    
    for(int i =0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(isPal(S,i,j))
            count++;
        }
    }
    
    return count;
    
}