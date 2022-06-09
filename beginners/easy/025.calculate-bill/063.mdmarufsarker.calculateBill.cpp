#include <bits/stdc++.h>
using namespace std;

int main()
{
	int unit;
	float amount,totalAmount,subCharge;
	
	cout << "Enter total units consumed:";
	cin >> unit;
	
	if(unit <= 50) {
		amount = unit * 0.50;
	}
	else if(unit <= 150)
    {
        amount = 25 + ((unit-50) * 0.75);
    }
    else if(unit <= 250)
    {
        amount = 100 + ((unit-150) * 1.20);
    }
    else
    {
        amount = 220 + ((unit-250) * 1.50);
    }
	
	subCharge = amount * 0.20;
    	totalAmount  = amount + subCharge;
	
	cout << "Electricity Bill = Rs." <<fixed <<setprecision(2) << totalAmount << "\n";
	
	return 0;
}
