#include <iostream>
 
using namespace std;
 
int main() {

    int num;

    cout << "Enter a number: ";
    cin >> num;

    (num % 2 == 0) ? (cout << "This is a even number \n") : (cout << "This is a odd number \n");
 
    return 0;
}
