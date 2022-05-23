#include<iostream>
using namespace std;

int main()
{

    int num;

    cout << "Enter your maximum limit of number: ";
    cin >> num;

    for (int i=1; i<=num; i++)
    {
        if(i%2 == 0)

        {
            cout << i << " ";
        }
    }

    cout << "\n";

    return 0;

}
