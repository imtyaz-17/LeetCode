//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here        
        long long prod=1, flag=0;
        int i;
        for( i =0;i<n;i++){
            if(nums[i]==0) flag++;
            else
                prod *= nums[i];
        }
        
        vector<long long int> res(n);
        for(i =0;i<n;i++){
            if(flag>1) res[i] = 0;
            else if(flag == 0)
            res[i] = prod/nums[i];
            else if(flag ==1 & nums[i]!=0)
            res[i] =0;
            else
            res[i]=prod;
        }
        
        return res;
    }
};


//{ Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends