// Find Largest of Two Numbers

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int num1, num2;
	
	cin >> num1 >> num2;
	
	if(num1 > num2) cout << num1 << " is the largest\n";
	else if(num2 > num1) cout << num2 << " is the largest\n";
	else cout << "Both are equal\n";
	
    return 0;
}
