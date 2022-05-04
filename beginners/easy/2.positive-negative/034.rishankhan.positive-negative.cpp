#include <iostream>
using namespace std;
int main() {
    float num;
    cin>>num;
    if(num==0){
        cout<<"This is zero\n";
    }
    if(num>0){
        cout<<"This is a positive number\n";
    }
    else if(num<0){
        cout<<"This is a negative number\n";
    }
    return 0;
}
