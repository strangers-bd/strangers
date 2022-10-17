#include<iostream>
using namespace std;

int main(){
    int num, sum;
    sum = 0;
    cin >> num;
    if (num >= 0)
    {
        for (int i = 0; i <= num; i++){
            sum += i;
        }

        cout << "Total sum = " << sum << endl;
    }

    else cout << "You have entered a negative number." << endl;
    return 0;
}