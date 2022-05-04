#include <iostream>

using namespace std;
int main() {
 char alpha;
 cin>>alpha;
 if((alpha>='a' && alpha <='z') || (alpha>='A' && alpha<='Z')){
     cout<<"It is an alphabet.\n";
 }
 else{
     cout<<"It is not an alphabet.\n";
 }
}
