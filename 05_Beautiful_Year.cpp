// https://codeforces.com/problemset/problem/271/A

#include <bits/stdc++.h>
#include <set>
using namespace std;

int checkDistinct(int year) {
    set<int> S;
    int temp = year;

    for(int i = 0; i < 4; i++) 
    {
        S.insert(temp % 10);
        temp /= 10;
    }

    if(S.size() == 4) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int year;
    cin >> year;

    int i = 0;
    while(1) {
        year++;
        if(checkDistinct(year)) {
            cout << year;
            break;
        }
    }

}
