// https://codeforces.com/problemset/problem/69/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, xsum, ysum, zsum;
    cin >> n;

    xsum = 0;
    ysum = 0;
    zsum = 0;

    for (int i = 0; i < n; i++) {
        int x, y, z;
        cin >> x >> y >> z;

        xsum += x;
        ysum += y;
        zsum += z;
    }

    if (xsum == 0 && ysum == 0 && zsum == 0) 
        cout << "YES";
    else 
        cout << "NO";
}

