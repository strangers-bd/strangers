#include<iostream>
using namespace std;
int main()
{
    float temperature;

    cout << "Enter your temperature: ";  // CELSIUS UNIT
    cin >> temperature;

    if(temperature < 0)
    {
		cout << "Freezing Weather\n";
	}
	else if(temperature < 10)
	{
		cout << "Very Cold Weather\n";
	}
	else if(temperature < 20)
	{
		cout << "Cold Weather\n";
	}
	else if(temperature < 30)
	{
		cout << "Normal in Temp\n";
	}
	else if(temperature < 40)
	{
		cout << "It's Hot\n";
	}
	else{
		cout << "It's Very Hot\n";
	}

    return 0;
}
