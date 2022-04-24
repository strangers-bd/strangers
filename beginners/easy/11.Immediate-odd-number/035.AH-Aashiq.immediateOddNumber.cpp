#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter integer number: ";
    cin >> num;

    if (num%2 == 0){
        int odd_num = num + 1;
        cout << "Your immediate next odd number is = " << odd_num << endl;
    }else{
        cout << "Invalid input\n";
    }

    return 0;
}
