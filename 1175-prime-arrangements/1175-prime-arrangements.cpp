class Solution {
public:
    int M = pow(10, 9) + 7;
    int numPrimeArrangements(int n) {
        //finding primes using sieve of eratosthenes.
        vector<bool> seive(n + 1, true);
        seive[1] = false;
        int primes = 0;
        for(int i = 2; i <= n; i++)
            if(seive[i])
            {
                primes++;
                int tmp = 2;
                while(tmp * i <= n)
                    seive[tmp*i] = false, tmp++;
            }
        
        long long ans = 1;
        for(int i = 1; i <= primes; i++)
            ans = (ans * i) % M;
        
        for(int i = 1; i <= n - primes; i++)
            ans = (ans * i) % M;
            
        return ans;
    }
};