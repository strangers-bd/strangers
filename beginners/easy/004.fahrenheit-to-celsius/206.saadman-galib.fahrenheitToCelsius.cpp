#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double c, f;
    cin >> f;
    c = (f - 32) / 1.8;
    cout << "Fahrenheit to Celsius is = " << round(c*100)/100 << endl;
}