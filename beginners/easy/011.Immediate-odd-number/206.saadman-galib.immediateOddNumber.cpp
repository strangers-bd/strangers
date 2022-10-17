#include<iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    if (num > 0){
        if (num %2 == 0){
            cout << "Your immediate next odd number is = " << num + 1 << endl;
        }
        else{
            cout << "Invalid input" << endl;
        }
    }
    else{
        cout << "You have to enter a positive number" << endl;
    }
    return 0;
}