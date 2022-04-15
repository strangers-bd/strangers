#include<iostream>
using namespace std;
int main()
{
    while (1)
    {


        int roll_number;
        float number_of_physics,number_of_chemistry,number_of_computer;
        float total,percentage,division;
        char name[50];

        cout << "\nEnter student roll number: ";
        cin >> roll_number;

        cout << "Enter student name: ";
        cin >> name;

        cout << "Input the marks of Physics, Chemistry and Computer Application : ";
        cin >> number_of_physics >> number_of_chemistry >> number_of_computer;

        cout << "Marks in Physics: " << number_of_physics << "\n";
        cout << "Marks in Chemistry: " << number_of_chemistry << "\n";
        cout << "Marks in Computer Application: " << number_of_computer << "\n";

        total = number_of_physics + number_of_chemistry + number_of_computer;
        cout << "Total Marks = " << total <<"\n";

        percentage = total / 3;
        cout << "Percentage = " << percentage << "\n";

        if(percentage>=60)
        {
            cout <<"Division=First";
        }

        else if(48<=percentage&&percentage<60)
        {
            cout <<"Division=Second";
        }

        else if(percentage<48)
        {
            cout <<"Division=Third";
        }

        cout << "\n";
    }
    return 0;

}

