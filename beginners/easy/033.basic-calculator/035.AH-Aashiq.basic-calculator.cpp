#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int num1, num2;
	float result;
	char ch;
	
	cout << "Enter an operator (+,-,*,/,%):";
	cin >> ch;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number:";
	cin >> num2;
	
	
	switch(ch) {
		
		case '+':
			result = num1 + num2;
			cout  << "Summation = " << result;
			break;
		case '-':
			result = num1 - num2;
			cout << "Subtraction = " << result;
			break;
		case '*':
			result = num1 * num2;
			cout << "Multiplication = " << result;
			break;
		case '/':
			result = float(num1) / float(num2);
			cout << setprecision(2) << fixed << "Division = " << result;
			break;
		
		case '%':
			result =  num1 % num2;
			cout << "Modulus = " << result;
			break;
		default:
			cout << "Invalid input";
		
	}
	
	return 0;
}

