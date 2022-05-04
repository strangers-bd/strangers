#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    float tempu;
    cin>>tempu;
    if(tempu<0){
        cout<<"Freezing weather\n";
    }
    else if(tempu <= 10){
        cout<<"Very Cold weather\n";
    }
    else if(tempu <= 20){
        cout<<"Cold weather\n";
    }
    else if(tempu <= 30){
        cout<<"Normal in Temp\n";
    }
    else if(tempu <= 40){
        cout<<"Its Hot\n";
    }
    else{
        cout<<"Its Very Hot\n";
    }
}
