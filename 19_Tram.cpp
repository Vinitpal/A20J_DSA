// https://codeforces.com/problemset/problem/116/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], b[n];

    for(int i = 0; i < n; i++) 
        cin >> a[i] >> b[i];
    
    int capacity = 0, temp = 0;
    int i = 0;
    int passengers = 0;

    while(i < n) {

        passengers += b[i] - a[i];
        // cout << passengers << endl;

        if(passengers > capacity) {
            capacity = passengers;
        }
        
        i++;
    }

    cout << capacity;
    return 0;
}