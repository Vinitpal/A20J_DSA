// https://codeforces.com/problemset/problem/148/A?f0a28=1
#include <bits/stdc++.h>
using namespace std;

int main() {
    int punched, tailShut, pawsTrampled, summonMom, dragons;
    cin >> punched >> tailShut >> pawsTrampled >> summonMom >> dragons;

    int damagedDragons = 0;

    for(int i = 1; i <= dragons; i++) 
    {
        if(i % punched == 0 || i % tailShut == 0 || i % pawsTrampled == 0 || i % summonMom == 0) 
        {
            damagedDragons++;
        }
    }

    cout << damagedDragons;

    return 0;
}