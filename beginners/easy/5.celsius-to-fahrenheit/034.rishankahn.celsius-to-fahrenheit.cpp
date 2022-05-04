#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int fahrenheit,celsius;
    cin>>celsius;
    fahrenheit = (celsius * 1.8) + 32;
    cout<<setprecision(2)<<fixed;
    cout<<"Fahrenheit to Celsius is = "<<fahrenheit<<endl;    
    return 0;
}
