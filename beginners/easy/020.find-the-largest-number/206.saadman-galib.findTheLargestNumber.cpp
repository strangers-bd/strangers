#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    double primary_max = (num1 + num2 + abs(num1 - num2)) / 2;
    double max = (primary_max + num3 + abs(primary_max - num3)) / 2;
    cout << "The Largest Number is =The Largest Number is = " << fixed << setprecision(2) << max << endl;
    return 0;
}