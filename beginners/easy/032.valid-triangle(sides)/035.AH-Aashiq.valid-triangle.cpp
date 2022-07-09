#include<iostream>
using namespace std;
int main()
{
	//Sides Variables
	int a,b,c;
	
	//Inputs Sides
	cout << "Enter 1 side of triangle: ";
	cin >> a;
	
	cout << "Enter 2 side of triangle: ";
	cin >> b;
	
	cout << "Enter 3 side of triangle: ";
	cin >> c;
	
	//Logics Statements
	if((a + b > c)&&(b + c > a) &&(c + a > b))
	{
		cout << "Valid Triangle \n";
	}
	else 
	{
		cout << "Invalid Triangle \n";
	}
	
	return 0;
}

