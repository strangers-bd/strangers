#include<iostream>
using namespace std;
int main()
{

    char grade;
    cin >>grade;

    switch (grade)
    {
    case 'E':
        cout << "Excellent\n";
        break;
    case 'V':
        cout << "Very good\n";
        break;
    case 'G':
        cout << "Good\n";
        break;
    case 'A':
        cout << "Average\n";
        break;
    case 'F':
        cout << "Fail\n";
        break;
    default:
    cout << "Invalid Grade Found\n";
	break;
    }
    return 0;
}
