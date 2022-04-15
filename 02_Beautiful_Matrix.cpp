// https://codeforces.com/problemset/problem/263/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n1 = 5, n2 = 5; 
    int arr[n1][n2];
    int r, c;

    for (int i = 0; i < n1; i++) 
    {
        for (int j = 0; j < n2; j++ ) 
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n1; i++) 
    {
        for (int j = 0; j < n2; j++)
        {
            if(arr[i][j] == 1) 
            {
                r = abs(2 - i);
                c = abs(2 - j);
                cout << r+c;
            }
        } 
    }

    return 0;
}