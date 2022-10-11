class Solution {
public:
    int numDecodings(string s) {
        if(s.length()==0 || s[0]=='0') return 0;
        if (s.length()==1) return 1;
        
        int count1=1,count2=1;
        int i,digit,d_digit;
        
        for (i=1;i<s.length();++i){
            digit = s[i]- '0';
            d_digit = (s[i-1]-'0')*10 + digit;
            int count =0;
            if(digit>0)
                count+=count2;
            if(d_digit >=10 && d_digit<=26)
                count+=count1;
            count1 = count2;  // previous to previous solnv
            count2 = count;  // count2 prev soln
        }
        return count2;
    }
};