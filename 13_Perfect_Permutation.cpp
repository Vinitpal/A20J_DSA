// https://codeforces.com/problemset/problem/233/A?f0a28=1
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    // if odd then complete swapping not possible
    // so print -1
    if(n % 2 == 1)
    {
        cout << -1;
        return 0;
    } 
    // if even then swapping is possible so 
    else 
    {
        // creating series of permutation
        for(int i = 0; i < n; i++) 
        {
            arr[i] = i+1;
        }

        // swapping the elements
        for(int i = 0; i < n; i++) 
        {
            swap(arr[i], arr[i+1]);
            i++;
        }

        // printing the result
        for(int i = 0; i < n; i++) 
        {
            cout << arr[i] << " ";
        }

    }
    return 0;
}