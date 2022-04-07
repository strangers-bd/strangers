#include<iostream>
using namespace std;
int main()
{
    float celsius,fahrenheit;
    cout << "Enter your conversion value: ";
    cin >> celsius;
    fahrenheit = (celsius*1.8) + 32;
    printf("Celsius to Fahrenheit is = %.2f",fahrenheit);

    return 0;

}
