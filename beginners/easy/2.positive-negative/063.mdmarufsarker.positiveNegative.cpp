#include <iostream>
using namespace std;
 
int main() {

    float num;

    cout << "Enter a number: ";
    cin >> num;
    
    (num > 0) ? (cout << "This is a positive number \n") : ((num < 0) ? cout << "This is a negative number\n" : cout << "This is zero\n");
 
    return 0;
}