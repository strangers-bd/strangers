#include<iostream>
using namespace std;
int main()
{
    int number, sum = 0;

    while (number <= 0)
    {
        cout << "Enter your positive integer number: ";
        cin >> number;
        for (int i = 1; i<=number; i++)
        {
            sum = sum+i;
        }
    }

    cout << "Sum = " << sum << "\n";

    return 0;

}
