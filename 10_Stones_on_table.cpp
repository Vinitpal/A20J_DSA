// https://codeforces.com/problemset/problem/266/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string str;
    cin >> n >> str;

    int count = 0;
    for(int i = 0; i < n; i++) {
        if(str[i] == str[i+1])
        {
            count++;
        }
    }

    cout << count;
    return 0;
}