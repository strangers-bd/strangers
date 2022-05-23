#include <iostream>

using namespace std;
int main() {
 int num;
 cin>>num;
 if(num%2==0){
     num = num + 1;
     cout << "Your immediate next odd number is = " << num << endl;
 }
 else if(num%2 != 0){
     cout<<"Invalid input\n";
 }
}
