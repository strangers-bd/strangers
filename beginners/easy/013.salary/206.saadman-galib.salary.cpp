#include<iostream>
using namespace std;

int main(){
    int salary, monthly_salary;
    cin >> salary;
    monthly_salary = salary / 12;
    cout << "Your monthly salary is = " << monthly_salary << "$"<< endl;
    if (monthly_salary >= 4500)
    {
        cout << "You are rich"<< endl;
    }
    else{
        cout << "You are Poor" << endl;
    }

    return 0;
}