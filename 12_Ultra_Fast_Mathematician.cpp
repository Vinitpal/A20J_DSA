// https://codeforces.com/problemset/problem/61/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    string n1, n2;
    cin >> n1 >> n2;
    string ans = "";
    int size = n1.size();

    for(int i = 0; i < size; i++) {
        if(n1[i] == n2[i]) {
            ans += "0";
        } else {
            ans += "1";
        }
    }

    cout << ans << "\n";
    return 0;
}