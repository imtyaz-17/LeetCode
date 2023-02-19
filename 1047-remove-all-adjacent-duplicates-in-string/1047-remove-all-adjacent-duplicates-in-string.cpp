class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.size();
        stack<char>st;
        string ans="";
        for (int i=0;i<n;i++){
            if(st.empty() || st.top()!= s[i]){
                st.push(s[i]);
            }
            else{
                st.pop();
            }
        }
        
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};