// problem name

#include <bits/stdc++.h>
using namespace std;

int main()
{
	char ch, grade;
	
	cout << "Input the grade :";
	cin >> grade;
	
	grade = toupper(grade);
	
	switch(grade)
	{
		case 'E':
			cout << "Excellent";
			break;
		case 'V':
			cout << "Very Good";
			break;
		case 'G':
			cout << "Good";
			break;
		case 'A':
			cout << "Average";
			break;
		case 'F':
			cout << "Fails";
			break;
		default:
			cout << "Invalid Grade Found\n";
			break;
	}
	
    return 0;
}
