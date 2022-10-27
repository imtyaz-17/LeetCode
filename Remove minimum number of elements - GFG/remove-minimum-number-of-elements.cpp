//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
  public:
    int minRemove(int a[], int b[], int n, int m) {
        unordered_map<int, int> countA, countB;
        
        for(int i =0;i<n;i++){
            countA[a[i]]++;
        }
        for(int i =0;i<m;i++){
            countB[b[i]]++;
        }
        
        int ans =0;
        
        for(auto it: countA){
            if(countB.find(it.first) != countB.end()){
                ans+= min(it.second, countB[it.first]);
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int a[n], b[m];
        for (i = 0; i < n; i++) cin >> a[i];
        for (i = 0; i < m; i++) cin >> b[i];
        Solution obj;
        cout << obj.minRemove(a, b, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends