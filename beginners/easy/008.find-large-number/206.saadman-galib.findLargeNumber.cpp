#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    if (a > b){
        cout << fixed << setprecision(2) << a << " is the largest" << endl;
    }
    else if (b > a){
        cout << fixed << setprecision(2) << b << " is the largest" << endl;
    }
    else {
        cout << "Both are equal" << endl;
    }
    return 0;
}