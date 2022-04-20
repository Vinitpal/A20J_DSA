// https://codeforces.com/problemset/problem/110/A
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


int isLuckyNum(int &luckyCount) {
    if(luckyCount == 0){
        return 0;
    }

    while(luckyCount) {
        if(luckyCount % 10 == 4 || luckyCount % 10 == 7) {
            luckyCount /= 10;
        } else {
            break;
        }
    }

    if(luckyCount == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    ll n;
    int luckyCount = 0;
    cin >> n;

    while(n)
    {
        if(n % 10 == 4 || n % 10 == 7)
        {
            luckyCount++;
        }
        n /= 10;
    }

    if(isLuckyNum(luckyCount)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}