// https://codeforces.com/problemset/problem/228/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 4;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int i = 1, j = 0;
    int count = 0;

    while(i < n) {
        if(i == j) {
            i++;
            j = 0;
        }

        if(arr[i] == arr[j]) {
            count++;
            i++;
            j = -1;
        }

        j++;
    }

    cout << count;
    return 0;
}