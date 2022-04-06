#include<iostream>
using namespace std;
int main ()
{
    float fahrenheit,celsius;
<<<<<<< HEAD
    cout << "Enter your conversion value : ";
=======
    cout << "\nEnter your conversion value : ";
>>>>>>> 3cf02bcee98a79fcace38d975dee4e42adece8e7
    cin >> fahrenheit;

    celsius = (fahrenheit-32) / 1.8;
    printf("Fahrenheit to Celsius is = %.2f",celsius);

    return 0;

}
