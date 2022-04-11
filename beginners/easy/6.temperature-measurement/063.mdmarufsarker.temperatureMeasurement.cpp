#include<iostream>
using namespace std;

int main(){

    float temp;

    cout << "Input days temperature: ";
    cin >> temp;

    if(temp < 0)
    {
		cout << "Freezing Weather\n";
	}
	else if(temp < 10)
	{
		cout << "Very Cold Weather\n";
	}
	else if(temp < 20)
	{
		cout << "Cold Weather\n";
	}
	else if(temp < 30)
	{
		cout << "Normal in Temp\n";
	}
	else if(temp < 40)
	{
		cout << "It's Hot\n";
	}
	else{
		cout << "It's Very Hot\n";
	}
	
    // cout << "\n";

    return 0;

}
