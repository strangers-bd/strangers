#include <iostream>
#include <iomanip>
using namespace std;
int main() {
 char g;
 cout<<"Input the grade : ";
 cin>>g;
 if(g=='E'){
     cout<<"Excellent\n";
 }
 else if(g=='V'){
     cout<<"Very Good\n";
 }
 else if(g=='G'){
     cout<<"Good\n";
 }
 else if(g=='A'){
     cout<<"Average\n";
 }
 else{
     cout<<"Fail\n";
 }
}
