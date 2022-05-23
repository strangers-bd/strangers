// Write a program which can input an integer number from the user and display the immediate next odd number.

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int num;
	
	cin >> num;
	
	if(num >= 0){
		if(num % 2 == 0){
			num += 1;
			cout << "Your immediate next odd number is = " << num << endl;
		}else{
			cout << "Your input number is invalid\n";
		}
	}
	
    return 0;
}
