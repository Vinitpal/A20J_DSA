// https://codeforces.com/problemset/problem/80/A

#include <bits/stdc++.h>
using namespace std;

int isPrime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int nextPrime(int n) {
    int temp = n;

    while(true) {
        temp++;
        if (isPrime(temp)) return temp;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    
    if(isPrime(m)) {
        int ans = nextPrime(n);
        if(ans == m) {
            cout << "YES \n";
        } else {
            cout << "NO \n";
        }
    } else {
        cout << "NO \n";
    }

    
    return 0;
}