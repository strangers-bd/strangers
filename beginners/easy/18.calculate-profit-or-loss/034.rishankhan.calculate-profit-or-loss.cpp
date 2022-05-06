#include <iostream>
using namespace std;
int main() {
    int cost,sell;
    cin>>cost>>sell;
    if(sell>cost){
        cout<<"Profit: "<<sell-cost<<endl;
    }
    else if(cost>sell){
         cout<<"Loss: "<<cost-sell<<endl;
    }
    else if(cost==sell){
        cout<<"No profit No loss"<<endl;
    }
    return 0;
}
