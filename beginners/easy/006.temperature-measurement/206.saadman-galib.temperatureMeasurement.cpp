#include<iostream>
using namespace std;

int main(){
    double temp;
    cout << "Input days temperature: ";
    cin >> temp;

    if(temp < 0)
        cout << "Freezing Weather." << endl;
    else if(temp < 10)
        cout << "Very cold weather." << endl;
    else if(temp < 20)
        cout << "Cold Weather." << endl;
    else if(temp < 30)
        cout << "Normal in temp." << endl;
    else if (temp < 40)
        cout << "It's Hot." << endl;
    else
        cout << "It's very hot." << endl;

    return 0;
}