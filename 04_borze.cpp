// https://codeforces.com/problemset/problem/32/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    string code, decode;
    cin >> code;

    int n = code.length();



    for(int i = 0; i < n; i++) 
    {
        if(code[i] == '-' && code[i+1] == '.') 
        {
            decode += "1";
            i++;
        }
        else if(code[i] == '-' && code[i+1] == '-')
        {
            decode += "2";
            i++;
        } else if (code[i] == '.') 
        {
            decode += "0";
        }
    }

    cout << decode;
}