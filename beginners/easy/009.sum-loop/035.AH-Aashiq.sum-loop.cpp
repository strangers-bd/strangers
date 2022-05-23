#include<iostream>
using namespace std;
int main ()
{

    int number, sum = 0;

    cout << "Enter your number: ";
    cin >> number;

    for (int i = 0; i<=number; i++)
    {
        sum = sum +i;
    }
    cout <<"Total sum = " << sum << "\n";

    return 0;
}
