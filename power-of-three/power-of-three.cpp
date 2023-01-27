class Solution {
public:
    bool isPowerOfThree(int n) {
        //  double x = log10(n) / log10(3);
        // return (n > 0) && (ceil(x) == floor(x));
        
        if(n==1)
            return true;
        if(n==0 || n%3 !=0)
            return false;
        return isPowerOfThree(n/3);
    }
};