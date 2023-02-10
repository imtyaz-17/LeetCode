//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    public:
    //Function to return sum of upper and lower triangles of a matrix.
    vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        // code here
        int upper_sum=0;
        int lower_sum=0;
         vector<int>sum;
        for(int row = 0; row<n;row++){
            for(int col = row; col<n;col++){
                upper_sum+=matrix[row][col];
            }
        }
        sum.push_back(upper_sum);
        for(int row = 0; row<n;row++){
            for(int col = 0; col<=row;col++){
                lower_sum+=matrix[row][col];
            }
        }
        sum.push_back(lower_sum);
       
       return sum;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 
        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }
        Solution ob;
        vector<int> result = ob.sumTriangles(matrix,n);
        for (int i = 0; i < result.size(); ++i)
            cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends