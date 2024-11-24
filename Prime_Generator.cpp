#include<bits/stdc++.h>
#define ll long long int
using namespace std;

// Simple sieve of Eratosthenes to find primes up to sqrt(b)
void simpleSieve(int limit, vector<int>& primes) {
    vector<bool> sieve(limit + 1, true);
    sieve[0] = sieve[1] = false;
    
    for (int p = 2; p * p <= limit; ++p) {
        if (sieve[p]) {
            for (int i = p * p; i <= limit; i += p) {
                sieve[i] = false;
            }
        }
    }
    
    for (int p = 2; p <= limit; ++p) {
        if (sieve[p]) {
            primes.push_back(p);
        }
    }
}

// Segmented Sieve to find primes in range [a, b]
void segmentedSieve(int a, int b) {
    int limit = sqrt(b) + 1;
    vector<int> primes;
    simpleSieve(limit, primes);  // Get primes up to sqrt(b)

    vector<bool> isPrime(b - a + 1, true);  // Mark primes in range [a, b]
    
    // Use primes up to sqrt(b) to mark multiples in the range [a, b]
    for (int i = 0; i < primes.size(); ++i) {
        int currentPrime = primes[i];
        
        // Find the first multiple of currentPrime in the range [a, b]
        int start = max(currentPrime * currentPrime, (a + currentPrime - 1) / currentPrime * currentPrime);
        
        // Mark all multiples of currentPrime in the range as non-prime
        for (int j = start; j <= b; j += currentPrime) {
            isPrime[j - a] = false;
        }
    }
    
    // Print primes in the range [a, b]
    for (int i = 0; i <= b - a; ++i) {
        if (isPrime[i] && (i + a) != 1) {  // Don't print 1
            cout << (i + a) << "\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;
        segmentedSieve(a, b);
        if (t) cout << "\n";  // Print a newline between test cases except for the last one
    }

    return 0;
}
