#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
	float principle, rate, time, CI;

    
    cout << "Enter principle (amount): ";
    cin >> principle;
	
	cout << "Enter Time: ";
	cin >> time;
	
	cout << "Enter rate: ";
	cin >> rate;
	
    CI = principle* (pow((1 + rate / 100), time));

	cout << "Compound Interest = " << fixed << setprecision(6)<< CI;
    
    return 0;
    
    
}
