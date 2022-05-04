#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    float fahrenheit,celsius;
    cin>>fahrenheit;
    celsius = (fahrenheit - 32) / 1.8;
    cout<<setprecision(2)<<fixed;
    cout<<"Fahrenheit to Celsius is = "<<celsius<<endl;    
    return 0;
}
