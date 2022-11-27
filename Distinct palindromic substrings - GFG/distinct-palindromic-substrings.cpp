//{ Driver Code Starts
// C++ program to find all distinct palindrome sub-strings
// of a given string
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int palindromeSubStrs(string s) {
        // code here
        int n = s.size();
	
	vector<vector<bool> > dp(n, vector<bool>(n, false));
	for (int i = 0; i < n; i++) {
		dp[i][i] = 1;
		if (i < n && s[i] == s[i + 1]) {
			dp[i][i + 1] = 1;
		}
	}
	
	for (int len = 3; len <= n; len++) {
		for (int i = 0; i + len - 1 < n; i++) {
			if (s[i] == s[i + (len - 1)]
				&& dp[i + 1][i + (len - 1) - 1]) {
				dp[i][i + (len - 1)] = true;
			}
		}
	}

	
	vector<int> kmp(n, 0);
	for (int i = 0; i < n; i++) {
		int j = 0, k = 1;
		while (k + i < n) {
			if (s[j + i] == s[k + i]) {
				
				dp[k + i - j][k + i] = false;
				kmp[k++] = ++j;
			}
			else if (j > 0) {
				j = kmp[j - 1];
			}
			else {
				kmp[k++] = 0;
			}
		}
	}
	int count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (dp[i][j]) {
				
				count++;
			}
		}
	}
        
        return count;
    }
};

//{ Driver Code Starts.

// Driver program
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.palindromeSubStrs(str) << endl;
    }
    return 0;
}

// } Driver Code Ends