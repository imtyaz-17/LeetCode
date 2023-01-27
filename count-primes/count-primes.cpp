class Solution {
public:
    int sieve (int N){
        
        bool isPrime[N];
        for(int i = 2 ; i < N ; i++)
            isPrime[i]=true;
        
        for(int i = 2 ; i * i < N ; i++){
         if(isPrime[i])
            for(int j = i * i ; j < N ; j += i)
                isPrime[j] = false;
        }
        
        int primCnt = 0;
        
        for(int i = 2 ; i < N ; i++)
        if(isPrime[i])
            primCnt++;
        return primCnt;
    }
    
    int countPrimes(int n) {
            if(n < 2)
                 return 0;
            return sieve(n);
    }
};