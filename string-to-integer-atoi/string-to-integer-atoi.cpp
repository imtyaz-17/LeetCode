class Solution {
public:
    int myAtoi(string s) {
        
        if(s.empty())
            return 0;
        int len = s.length();
        int i=0,sign =1;
        
        while(i<len && s[i]== ' '){
            i++;
        }
        if(s[i]=='-'||s[i]=='+')
        {
            sign=s[i]=='-'?-1:1;
            i++;
        }
        
        long int result=0;
        int digit;
        
        while(s[i]>='0'&&s[i]<='9'){
            if(result <= INT_MIN || result >= INT_MAX)
                break;
            digit=(s[i]-'0');
            result=result*10+digit;
            i++;
        }
        result*=sign;
        if(result <= INT_MIN)
            return INT_MIN;
        if(result >= INT_MAX)
            return INT_MAX;
        
        return (int) result;
    }
};