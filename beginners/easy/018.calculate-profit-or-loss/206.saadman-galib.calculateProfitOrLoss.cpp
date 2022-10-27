#include<iostream>
using namespace std;

int main(){
    int costp, sellp;
    cout << "Input cost price: ";
    cin >> costp;
    cout << "Input selling price: ";
    cin >> sellp;
    if (costp > sellp){
        cout << "Loss: " << costp - sellp << endl;
    } else if (sellp > costp){
        cout << "Profit: " << sellp - costp << endl;
    } else{
        cout << "No profit No loss" << endl;
    }
}