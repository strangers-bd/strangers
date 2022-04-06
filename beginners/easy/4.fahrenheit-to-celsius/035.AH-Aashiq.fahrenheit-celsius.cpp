#include<iostream>
using namespace std;
int main ()
{
    float fahrenheit,celsius;
    cout << "Enter your conversion value : ";
    cin >> fahrenheit;

    celsius = (fahrenheit-32) / 1.8;
    printf("Fahrenheit to Celsius is = %.2f",celsius);

    return 0;

}
