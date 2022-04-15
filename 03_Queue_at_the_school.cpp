// https://codeforces.com/problemset/problem/266/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    
    string queue;
    cin >> queue;
    
    int i = 0;

    while(t--) 
    {
        for(int i = 1; i < n; i++) 
        {
            if (queue[i] == 'G' && queue[i-1] == 'B') 
            {
                queue[i] = 'B';
                queue[i-1] = 'G';
                i++;
            }
        }
        
    }


    cout << queue;
}