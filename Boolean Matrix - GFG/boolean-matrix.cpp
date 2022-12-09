//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here 
       
        int r=matrix.size();
         int c = matrix[0].size();
        
        bool rowFlg=false,colFlg=false;
        int i,j;
        
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if(i==0 && matrix[i][j]==1) rowFlg =true;
                if(j==0 && matrix[i][j]==1) colFlg =true;
                
                if(matrix[i][j]==1){
                    matrix[0][j]=1;
                    matrix[i][0]=1;
                }
            }
        }
        
        for(i=1;i<r;i++){
            for(j=1;j<c;j++){
                if(matrix[0][j]==1 || matrix[i][0]==1) matrix[i][j]=1;
            }
        }
        
        if(rowFlg ==true){
            for(i=0;i<c;i++) matrix[0][i]=1;
        }
        if(colFlg ==true){
            for(i=0;i<r;i++) matrix[i][0]=1;
        }
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        ob.booleanMatrix(matrix);


        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}



// } Driver Code Ends