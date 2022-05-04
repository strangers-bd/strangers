#include<iostream>
using namespace std;
int main()
{
    int annual_salary;
    cout << "Enter your annual salary: ";
    cin >> annual_salary;


    int monthly_salary = annual_salary / 12;
    cout << "Your monthly salary is = " << monthly_salary << "$" << endl;

    if (monthly_salary >= 4500){
        cout << "Rich\n";
    }else {
        cout << "Poor\n";
    }

    return 0;
}
