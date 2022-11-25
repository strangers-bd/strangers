// Written by: Md. Maruf Sarker
// Platform: Arch Linux
// Problem: 
/*
The ratio of age between father and son is 7:2. After n years, the ratio of age between father and son will be n1:n2. Find the age of father and son after n years.
*/
// Language: cpp
// Date: 2022-11-19

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, n1, n2;
    cin >> n;
    scanf("%d:%d", &n1, &n2);

    int s = (2 * n * (n2 - n1)) / (2 * n1 - 7 * n2);
    int f = (7 * s) / 2;

    cout << abs(f) << ":" << abs(s) << endl;

    return 0;
}