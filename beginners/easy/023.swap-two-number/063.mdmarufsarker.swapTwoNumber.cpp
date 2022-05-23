// https://github.com/strangers-bd/strangers/tree/main/beginners/easy/23.swap-two-number

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 10, y = 15;
    x = x + y - (y = x);
    printf("x = %d and y = %d",x,y);
	
    return 0;
}
