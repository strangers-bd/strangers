// Find the efficiency of the Carnot's engine working between the steam point and the ice point.

#include <bits/stdc++.h>
using namespace std;

float calcCalvin(float value){
	return value + 273.0;
}

int main()
{
	float T1, T2, eff;
	
	T1 = calcCalvin(100);
	T2 = calcCalvin(0);
	
	//T1 = 373; 
	//T2 = 273;
	
	eff = (1 - (T2 / T1)) * 100;
    
	cout << "Efficiency of the Carnot's engine is " << fixed << setprecision(2) << eff << "%" <<"\n";
	
}
