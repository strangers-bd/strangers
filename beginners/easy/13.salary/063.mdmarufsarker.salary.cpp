// Salary

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int salary, monthlySalary;
	
	cin >> salary;
	
	monthlySalary = salary / 12;
	
	if(monthlySalary >= 4500) cout << "Your monthly salary is = " << monthlySalary << "$" << endl << "You are Rich\n";
	else cout << "Your monthly salary is = " << monthlySalary << "$\n" << "You are Poor\n";
	
    return 0;
}
