#include <iostream>

using namespace std;
int main() {
 int num,sum=0;
 cin>>num;
 if(num<0){
     cout<<" \n";
 }
 else{
     for(int i =0;i<=num;i++){
     sum += i;
 }
 cout<<"Total sum = "<<sum<<endl;
 }
}
