#include <iostream>

using namespace std;

int main()
{
    int selling_price,cost_price,amount;

    cout << "Enter your cost price: ";
    cin >> cost_price;
    cout << "Enter your sellin price: ";
    cin >> selling_price;

    if(selling_price > cost_price)
    {
        amount = selling_price - cost_price;
        cout << "Profit = " << amount << endl;
    }
    else if(cost_price > selling_price)
    {
        amount = cost_price - selling_price;
        cout << "Loss = " << amount << endl;
    }
    else {
        cout << "No Profit No Loss\n";
    }

    return 0;
}
