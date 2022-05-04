#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  int num1, num2;
  cin>>num1>>num2;
  if(num1==num2){
      cout<<"Both are equal\n";
  }
  else if(num1>num2){
      cout<<num1<<" is the largest\n";
  }
  else{
      cout<<num2<<" is the largest\n";
  }
}
