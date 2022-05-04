#include <iostream>
#include <iomanip>
using namespace std;
int main() {
 int num,sum=0;
 cin>>num;
 for(int i =0;i<=num;i++){
     sum += i;
 }
 cout<<"Total sum = "<<sum<<endl;
}
