#include<iostream>
using namespace std;

int main(){
    int roll;
    string name;
    double physics, chemistry, cs;
    cout << "Enter your roll number: ";
    cin >> roll;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter the numbers you have got in Physics, Chemistry and Computer Application: ";
    cin >> physics >> chemistry >> cs;
    cout << "Roll No: " << roll << endl;
    cout << "Name of Student: " << name << endl;
    cout << "Marks in Physics: " << physics << endl;
    cout << "Marks in Chemistry: " << chemistry << endl;
    cout << "Marks in Computer Application: " << cs << endl;
    cout << "Total Marks = " << physics + chemistry + cs << endl;
    double percentage = (physics + chemistry + cs) / 3;
    cout << "Percentage = " << percentage << endl;
    if (percentage >= 60){
        cout << "First division" << endl;
    } else if (percentage < 60 && percentage >= 48){
        cout << "Second division" << endl;
    } else{
        cout << "Third division" << endl;
    }
    return 0;
}