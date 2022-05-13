// https://codeforces.com/problemset/problem/339/A

#include<bits/stdc++.h>
using namespace std;

int main() {
    string str, result;
    cin >> str;

    int n = str.length();

    if(n == 1) {
        cout << str;
        return 0;
    }

    int i = 2;
    int j = 0;

    while(i < n) {
        if(str[i] < str[j]) {
            swap(str[i], str[j]);
            j+=2;
        } else {
            j+=2;
        }

        if(i == j) {
            j = 0;
            i+=2;
        }
    }

    cout << str;
    return 0;
}