//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    string longestPalindrome(string S){
        // code here
        
        int n = S.size();

    bool table[n][n];

    memset(table, false, sizeof(table));
    int maxLength = 1;

    for (int i = 0; i < n; i++)
    {
        table[i][i] = true;
    }

    int start = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (S[i] == S[i + 1])
        {
            table[i][i + 1] = true;
            if (maxLength < 2) //Incase of conflict, return the substring which occurs first
            {
                start = i;
                maxLength = 2;
            }
        }
    }
    for (int k = 3; k <= n; k++)
    {
        for (int i = 0; i < n - k + 1; i++)
        {
            int j = i + k - 1;

            if (table[i + 1][j - 1] && S[i] == S[j])
            {
                table[i][j] = true;

                if (k > maxLength)
                {
                    start = i;
                    maxLength = k;
                }
            }
        }
    }
        
        string subString = S.substr(start, maxLength);
        return subString;
        
    }
};

//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.longestPalindrome(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends