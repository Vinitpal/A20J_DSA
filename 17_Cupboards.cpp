// https://codeforces.com/problemset/problem/248/A?f0a28=1

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int left[n], right[n];
    for(int i = 0; i < n; i++)
    {
        cin >> left[i] >> right[i];
    }
    
    int timeForLeft = 0, timeForRight = 0;
    int zeroInLeft = 0, oneInLeft = 0;
    int zeroInRight = 0, oneInRight = 0;

    for(int i = 0; i < n; i++) {
        if(left[i] == 0) {
            zeroInLeft++;
        }
    }

    for(int i = 0; i < n; i++) {
        if(right[i] == 1) {
            zeroInRight++;
        }
    }

    oneInLeft = n - zeroInLeft;
    oneInRight = n - zeroInRight;

    if(oneInLeft < zeroInLeft) {
        timeForLeft = oneInLeft;
    } else {
        timeForLeft = zeroInLeft;
    }

    if(oneInRight < zeroInRight) {
        timeForRight = oneInRight;
    } else {
        timeForRight = zeroInRight;
    }

    cout << timeForLeft + timeForRight << "\n";
    return 0;
}