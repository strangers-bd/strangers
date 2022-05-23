#include<iostream>
using namespace std;
int main()
{
    int num1,num2;

    cout << "Input two numbers: ";
    cin >> num1 >> num2;

    if (num1 > num2){
        cout << num1 << " is the largest number\n";
    }else if (num1 < num2){
        cout << num2 << " is the largest number\n";
    }else{
        cout << "Both are equal\n";
    }

    return 0;
}
