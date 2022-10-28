#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double ef, t1, t2;
    t1 = 373.0;
    t2 = 273.0;
    ef = (1 - (t2 / t1)) * 100;
    cout << "Efficiency of the Carnot's engine is " << fixed << setprecision(2) << ef << "%";
    return 0;
}