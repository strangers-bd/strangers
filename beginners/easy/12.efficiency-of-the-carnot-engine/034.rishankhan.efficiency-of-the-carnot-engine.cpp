#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    float t1,t2,ef;
    t1 = 373; 
    t2 = 273; 
    ef = (1-(t2 / t1))*100;
    cout<<setprecision(4)<<"Efficiency of the Carnot's engine is "<<ef<<"%"<<endl;
}
