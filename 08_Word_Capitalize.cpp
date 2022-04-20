// https://codeforces.com/problemset/problem/281/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    cout << (char)toupper(str[0]) + str.substr(1);

    return 0;
}