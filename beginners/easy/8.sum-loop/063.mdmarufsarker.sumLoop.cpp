// sum loop

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, sum= 0;
	
	cin >> n;
	
	for(int i = 1; i <= n; i++){
		sum += i;
	}
	
	cout << "Total sum = " << sum << "\n";
	
    return 0;
}
