class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ones=0;
        while (n){
            if (n&1){
                ones++;
            }
            n = n>>1; // n/=2
        }
        return ones;
    }
};