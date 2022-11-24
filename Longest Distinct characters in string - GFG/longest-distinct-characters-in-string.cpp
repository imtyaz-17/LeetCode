//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string S)
{
    // your code here
    map<char,int> visited;

int maxLength=0;
int start=0;
for(int end =0; end< S.length();end++){
    if(visited.find(S[end]) != visited.end()){
        start = max(start, visited[S[end]]+1);
    }
    
    visited[S[end]] = end;
    
    maxLength = max(maxLength, end -start+1);
}
return maxLength;
}