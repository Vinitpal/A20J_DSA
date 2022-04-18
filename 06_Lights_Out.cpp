// https://codeforces.com/problemset/problem/275/A
// soln https://youtu.be/oCHCD_-nhg4
// https://cdn.discordapp.com/attachments/753151975570276352/965478756259070003/unknown.png
#include <bits/stdc++.h>
using namespace std;

int checkEven(int x) {
    if(x % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int a11, a12, a13, a21, a22, a23, a31, a32, a33;
    cin >> a11 >> a12 >> a13 >> a21 >> a22 >> a23 >> a31 >> a32 >> a33;

    // checking if each element of matrix and its corresponding elements are even or not
    // if even then that element is "1" i.e. light is on  
    // check above img to get an idea

    cout << checkEven(a11 + a12 + a21) << checkEven(a11 + a12 + a13 + a22) << checkEven(a12 + a13 + a23) << "\n";
    cout << checkEven(a11 + a21 + a22 + a31) << checkEven(a12 + a21 + a22 + a23 + a32) << checkEven(a13 + a22 + a23 + a33) << "\n";
    cout << checkEven(a21 + a31 + a32) << checkEven(a22 + a31 + a32 + a33) << checkEven(a23 + a32 + a33) << "\n";

    return 0;

}