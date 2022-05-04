#include <iostream>
#include <iomanip>
using namespace std;
int main() {
 int salary,mon_salary;
 string sms;
 cin>>salary;
 mon_salary = salary/12;
 cout<<"Your monthly salary is = "<<mon_salary<<"$\n";
 if(mon_salary>=4500){
     sms = "You are Rich\n";
 }else{
     sms = "You are Poor\n";
 }
 cout<<sms;
}
