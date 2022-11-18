//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long  max_ending = arr[0];
    long long  min_ending = arr[0];

    long long  maxSub = arr[0];

    for (int i = 1; i < n; i++)
    {
        long long  temp = max<long long int>({arr[i], arr[i] * max_ending, arr[i] * min_ending});
        min_ending = min<long long int>({arr[i], arr[i] * max_ending, arr[i] * min_ending});
        max_ending = temp;

        maxSub = max(maxSub, max_ending);
    }
    return maxSub;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends