#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define FAST ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const long long M = 1e9+7;
// Binary Multiplication: Safe for values up to 1e18
long long binMul(long long a, long long b, long long MOD) {
    __int128 res = 0;
    __int128 A = a % MOD;
    __int128 B = b;

    while (B > 0) {
        if (B & 1) res = (res + A) % MOD;
        A = (A + A) % MOD;
        B >>= 1;
    }
    return (long long)res;
}

// Binary Exponentiation using safe multiplication
long long binExp(long long a, long long b, long long MOD) {
    long long ans = 1;
    a %= MOD;
    while (b > 0) {
        if (b & 1) ans = binMul(ans, a, MOD);
        a = binMul(a, a, MOD);
        b >>= 1;
    }
    return ans;
}

int main() {
    FAST
    cout << binExp(2,M-2,M); // inverse of 2
    return 0;
}
