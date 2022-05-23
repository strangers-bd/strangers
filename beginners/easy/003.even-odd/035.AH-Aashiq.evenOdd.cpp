#include <iostream>
using namespace std;
int main ()
{
    int number;
    cout <<"Enter your number: ";
    cin >> number;

    if(number % 2 == 0){
        cout << "This is a even number\n";
    }else{
        cout <<"This is a odd number\n";
    }
    return 0;
}

