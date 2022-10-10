#include<iostream>
using namespace std;

int main(){
    double num;
    cout << "Enter your input: ";
    cin >> num;

    if(num > 0){
        cout << "This is a positive number" << endl;
    }
    else if (num < 0){
        cout << "This is a negative number" << endl;

    }
    else{
        cout << "This is zero" << endl;
    }

    return 0;
}