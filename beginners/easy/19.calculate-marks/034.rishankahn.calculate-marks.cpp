#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    string roll,name;
    int phy,chem,cs,tot;
    float per;
    cin>>roll;
    cin>>name;
    cin>>phy>>chem>>cs;
    tot = phy+chem+cs;
    per=(tot*100)/300;
    cout<<"Roll No :"<<roll<<endl;
    cout<<"Name of Student :"<<name<<endl;
    cout<<"Marks in Physics :"<<phy<<endl;
    cout<<"Marks in Chemistry :"<<chem<<endl;
    cout<<"Marks in Computer Application :"<<cs<<endl;
    cout<<"Total Marks ="<<tot<<endl;
    cout<<setprecision(2)<<fixed;
    cout<<"Percentage = "<<per<<endl;
    if(per>=60){
        cout<<"Division = First\n";
    }
    else if(per>=48){
        cout<<"Division = Second\n";
    }
    else if(per>=36){
        cout<<"Division = Third\n";
    }
    return 0;
}
