#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double c, f;
    cin >> c;
    f = (c * 1.8) + 32;
    cout << "Celsius to Fahrenheit is = " << fixed << setprecision(2) <<  f << endl;
    return 0;
}