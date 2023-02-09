//{ Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        
        unordered_map<string,int>vote_count;
        
        for(int i=0;i<n;i++){
            vote_count[arr[i]]++;
        }
        
        string name="";
        int max_vote = INT_MIN;
        for(auto it: vote_count){
            if(it.second > max_vote){
                max_vote = it.second ;
                name = it.first; 
            }
            else if(it.second == max_vote){
                if(it.first < name){
                    name=it.first;
                }
            }
        }
        vector<string> ans;
        ans.push_back(name);
        ans.push_back(to_string(max_vote));
        
        return ans;
    }
};
//**  https://youtu.be/GySYmmehLM0

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}

// } Driver Code Ends