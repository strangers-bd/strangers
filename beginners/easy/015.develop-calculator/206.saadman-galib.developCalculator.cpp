#include<iostream>
using namespace std;

int main(){
    int num1, num2;
    char arithmeticOperation;
    cin >> num1 >> arithmeticOperation >> num2;
    switch(arithmeticOperation){
        case '+':
            cout << num1 + num2;
            break;
        case '-':
            cout << num1 - num2;
            break;
        case '*':
            cout << num1 * num2;
            break;
        case '/':
            cout << num1 / num2;
            break;
        case '%':
            cout << num1 % num2;
            break;
        default:
            cout << "You have not entered an arithmetic operator";
        }
    cout << endl;
    return 0;
}