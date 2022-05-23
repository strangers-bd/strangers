#include <iostream>
using namespace std;
int main() {
  int num,rev_num=0,rem;
  cin>>num;
  while(num!=0){
      rem = num % 10;
      num /= 10;
      rev_num = (rev_num*10)+rem;
  }
  cout<<"Reversed number ="<<rev_num<<endl;
return 0;
}
