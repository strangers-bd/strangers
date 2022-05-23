// Find the largest number

#include<bits/stdc++.h>
using namespace std;

int main(){
	float a, b, c, minor, major;
	cin >> a >> b >> c;
	
	minor = (a + b + abs(a - b)) / 2;
	major = (minor + c + abs(minor - c)) / 2;
	
	printf("The Largest Number is = %.2f", major);
	return 0;
}
