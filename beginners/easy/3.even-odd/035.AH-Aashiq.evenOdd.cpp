#include <iostream>
using namespace std;
int main ()
{
    int number;
    cout <<"Enter your number: ";
    cin >> number;

    if(number % 2 == 0){
        cout << "This is a even number";
    }else{
        cout <<"This is a odd number";
    }
    return 0;
}

