// https://codeforces.com/problemset/problem/155/A?f0a28=1
#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;

    int score[n];
    for(int i = 0; i < n; i++) 
    {
        cin >> score[i];
    }

    int amazing = 0;
    int j = 0;
    int i = 1;
    int lessCount = 0, greatCount = 0;

    while(i < n) {
        // cout << i << " " << j << endl;
   
        if(score[i] < score[j]) {
           lessCount++;
           j++;
        } else if (score[i] > score[j]) {
            greatCount++;
            j++;
        } else {
            j++;
        }

        if(i == j) {
            if(lessCount == i || greatCount == i) {
                amazing++;
            }
            lessCount = 0;
            greatCount = 0;
            j = 0;
            i++;
        }
    }
    
    cout << amazing << endl;
    return 0;
}