// https://codeforces.com/problemset/problem/144/A?f0a28=1
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
 
    // get the arr
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // find max index and min index from arr
    int max = 0;
    int min = 0;
    for (int i = 0; i < n; i++) {
        if(arr[max] < arr[i]) {
            max = i;
        }
        if(arr[min] >= arr[i]) {
            min = i;
        }
    }  

    // time taken for both of them to occur
    int time = (max + n - min -1);

    if (min < max) {
        time--;
    }

    cout << time;

    return 0;
}