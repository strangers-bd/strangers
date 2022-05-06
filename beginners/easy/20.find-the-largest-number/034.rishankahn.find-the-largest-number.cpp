#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float a,b,c,max,temp_max;
    cin>>a>>b>>c; 
    temp_max=(a+b+abs(a-b))/2;
    max=(temp_max+c+abs(temp_max-c))/2;
    cout<<"The Largest Number is = "<<max<<endl;
    return 0;
}
