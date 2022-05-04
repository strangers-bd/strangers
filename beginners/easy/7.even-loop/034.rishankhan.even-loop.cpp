#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  int num;
  cin>>num;
  if(num<0){
      cout<<"It is a negative number..\n";
  }
  else{
      for(int i = 1;i<=num;i++){
          if(i%2==0){
              cout<<i<<" ";
          }
      }
  }
}
