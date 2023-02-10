//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
  public:
    vector<int> PosNegPair(int a[], int n) {
        map<int,int>pos_map;
        vector<int>vec, ans;
        
        for(int i=0;i<n;i++)
        {
            if(a[i]<0)
            vec.push_back(a[i]);
            else
            pos_map[a[i]]++;
        }
        
        sort(vec.begin(),vec.end());
        int sz= vec.size();
        
        for(int i =sz-1;i>=0;i--){
            if(pos_map[abs(vec[i])]>0){
                ans.push_back(vec[i]);
                ans.push_back(abs(vec[i]));
                
              pos_map[abs(vec[i])]-=1;  
            }
        }
        
        return ans;
    }
};
//** https://youtu.be/hCGUty76A6M

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> v = obj.PosNegPair(a, n);

        if (v.size() == 0) cout << "0";

        for (auto it : v) cout << it << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends