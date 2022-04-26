#include<iostream>
#include<iomanip>
using namespace std;

int main ()
{
    float n;
    float T1,T2;

    T1 = 373;
    T2 = 273;

    n = (1 - (T2 / T1)) * 100;

    cout << setprecision(4)<<"Efficiency of the Carnot's engine is " << n  << "%" <<"\n";

    return 0;

}
