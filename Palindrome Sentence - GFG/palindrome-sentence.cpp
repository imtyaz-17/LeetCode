//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sentencePalindrome(string s) 
	{
	    // code here 
	    
	    int l=0;
	    int h= s.length()-1;
	    
	    for(int i=0;i<h;i++)
	    s[i] = tolower(s[i]);
	    
	    while(l<=h){
	        if(!(s[l] >='a' && s[l] <='z')){
	            l++;
	        }
	        else if(!(s[h] >='a' && s[h] <='z')){
	            h--;
	        }
	        else if(s[l]==s[h]){
	            l++;
	            h--;
	        }
	        else 
	        return false;
	    }
	    
	    return true;
	}
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        Solution ob;
        cout<<ob.sentencePalindrome(str)<<endl;
    }
    return 0;
}  


// } Driver Code Ends