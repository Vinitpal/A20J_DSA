//https://codeforces.com/problemset/problem/59/A

#include <bits/stdc++.h>
using namespace std;

int upperCase(string &str, int n) {
    for(int i = 0; i < n; i++) 
    {
        str[i] = toupper(str[i]);
    }
    return 0;
} 

int lowerCase(string &str, int n) {
    for(int i = 0; i < n; i++) 
    {
        str[i] = tolower(str[i]);
    }
    return 0;
} 

int main() {
    string str;
    cin >> str;

    int n = str.size();
    int upperCount = 0;
    int lowerCount = 0;

    for(int i = 0; i < n; i++) 
    {
        if(isupper(str[i])) {
            upperCount++;
        } else {
            lowerCount++;
        }
    }    

    if(upperCount > lowerCount) {
        upperCase(str, n);
    } else {
        lowerCase(str, n);
    }

    cout << str;

    return 0;
}