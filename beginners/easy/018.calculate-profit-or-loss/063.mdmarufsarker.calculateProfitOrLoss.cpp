// Calculate Profit or Loss

#include <iostream>
using namespace std;

int main()
{
    int sellingPrice, costPrice, amount;

    cout << "Enter your cost price: ";
    cin >> costPrice;
    cout << "Enter your selling price: ";
    cin >> sellingPrice;

    if(sellingPrice > costPrice)
    {
        amount = sellingPrice - costPrice;
        cout << "Profit = " << amount << "\n";
    }
    else if(costPrice > sellingPrice)
    {
        amount = costPrice - sellingPrice;
        cout << "Loss = " << amount << "\n";
    }
    else {
        cout << "No Profit No Loss\n";
    }
}
