#include <iostream>

using namespace std;
int main() {
 float num1,num2;
 char op;
 cin>>num1>>op>>num2;
 switch (op)
 {
 case '+':
     cout<<num1+num2<<endl;
     break;
 case '-':
     cout<<num1-num2<<endl;
     break;
 case '*':
     cout<<num1*num2<<endl;
     break;
 case '/':
     cout<<num1/num2<<endl;
     break;
 case '%':
     cout<<num1-((num1/num2)*num2)<<endl;
     break;
 default:
     break;
 }
}
