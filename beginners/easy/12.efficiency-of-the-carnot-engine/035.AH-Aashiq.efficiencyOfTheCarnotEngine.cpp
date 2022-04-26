#include<iostream>
#include<iomanip>
using namespace std;

int main ()
{
    float n;
    float T1,T2;

    T1 = 373; // Celsius to Kelvin for steam point 100 degree = 100C + 273 = 373K
    T2 = 273; // Celsius to Kelvin for ice point 0degree = 0C + 273 = 273K

    n = (1 - (T2 / T1)) * 100;

    cout << setprecision(4)<<"Efficiency of the Carnot's engine is " << n  << "%" <<"\n";

    return 0;

}
