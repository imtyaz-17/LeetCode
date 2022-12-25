//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
int bsearch(int array[], int left, int right)
{
     if(left < right)
     {
         if(array[left] < array[right])             // case 1
             return array[left];
         int mid = left + (right - left)/2;
         if(array[mid] > array[right])
             return bsearch(array, mid + 1, right); // case 2
         else 
             return bsearch(array, left, mid);     // case 3
     }
    return array[left];
}
    int findMin(int arr[], int n){
        //complete the function here
        return bsearch(arr, 0, n - 1);
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
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<<ob.findMin(a, n)<<endl;
	}
	return 0;
}
// } Driver Code Ends