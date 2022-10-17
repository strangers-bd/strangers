#include<iostream>
using namespace std;

int main(){
    int num, sum = 0;
    while (true){
        cout << "Enter a positive integer: ";
        cin >> num;
        if (num >= 0)
        {
            for (int i = 0; i <= num; i++)
            {
                sum += i;
            }

            cout << "Sum = " << sum << endl;
            break;
        }
    else
        cout << "Sorry to say but the number you have entered is a negative number. Pls enter again." << endl;
        }
    return 0;
}