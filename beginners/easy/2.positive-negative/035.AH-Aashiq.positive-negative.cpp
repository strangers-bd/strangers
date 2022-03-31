#include <iostream>
using namespace std;
int main()
{
    float num; // Variable

    cout << "Enter Your Number: ";
    cin >> num; //User Input

    if (num < 0){
        cout << "This is a negative number";      // Conditional Parts
    }
    else if (num > 0){
        cout << "This is a positive number";
    }
    else{
        cout << "This is Zero";
    }
}
