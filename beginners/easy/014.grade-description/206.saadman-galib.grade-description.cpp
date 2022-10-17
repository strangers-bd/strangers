#include<iostream>
using namespace std;

int main(){
    char grade;
    cout << "Input the grade : ";
    cin >> grade;
    grade = toupper(grade);

    switch (grade)
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
        cout << "Fail";
        break;
    default:
        cout << "Invalid input found";
    }
    cout << endl;
    return 0;
}