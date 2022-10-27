#include<iostream>
using namespace std;

int main(){
    int month;
    cout << "Input month number: ";
    cin >> month;
    if (month == 1 || month == 3 || month ==  5 || month ==  7 || month ==  8 || month ==  10 || month == 12){
        cout << "Total number of days = 31" << endl;
    } else if (month == 4 || month == 6 || month == 9 || month == 11){
        cout << "Total number of days = 30" << endl;
    } else if (month == 2){
        cout << "Total number of days = 28 or 29" << endl;
    } else {
        cout << "You have not entered an integer number or you have entered a number that is less than 0 or more than 12" << endl;
    }
    return 0;
}