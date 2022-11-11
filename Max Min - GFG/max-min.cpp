//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
   public:
    int findSum(int A[], int N)
    {
        int minn,maxx,i;
    	if(N%2==0){
    	    
    	    if(A[0]>A[1]){
    	        minn= A[1];
    	        maxx=A[0];
    	    }else{
    	        minn =A[0];
    	        maxx= A[1];
    	    }
    	    i=2;
    	}else{
    	    minn= A[0];
    	    maxx=A[0];
    	    
    	    i=1;
    	}
    	
    	while(i<N-1){
    	    if(A[i] > A[i+1]){
    	        if(A[i] > maxx)
    	        maxx= A[i];
    	        
    	        if(A[i+1] < minn)
    	        minn = A[i+1];
    	    }else{
    	        if(A[i+1] > maxx)
    	        maxx= A[i+1];
    	        
    	        if(A[i] < minn)
    	        minn = A[i];
    	    }
    	    
    	    i+=2;
    	}
    	
    	int sum = minn + maxx;
    	
    	return sum;
    }

};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.findSum(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

// } Driver Code Ends