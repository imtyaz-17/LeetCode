class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        
        string s = countAndSay(n-1);
        
        int i,len, counter =0;
        len = s.length();
        string ans="";
        
        for(i=0;i<len;i++){
            counter++;
            
            if(i==len-1 || s[i]!=s[i+1]){
               // char count= '0'+ counter; //int to char
                string count =to_string(counter);
                ans= ans+count;
                // ans= ans+to_string(counter)+s[i]; //int to char 
                ans= ans+s[i]; 
                counter=0;
            }
        }
        return ans;
    }
};