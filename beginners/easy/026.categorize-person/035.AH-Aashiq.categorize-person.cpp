#include<iostream>
using namespace std;
int main()
{
	int height;
	cout << "Enter your height in centimeter: ";
	cin >> height;
	
	if (height >= 135 && height <= 200)
	{
		if (height < 150)
		{
			cout << "The person is Dwarf";
		}

		else if ((height < 165) && (height >= 150))
		{
			cout << "The person is average heighted.";
		}
		else if ((height <= 195) && (height >= 165))
		{
			cout << "The person is taller.";
		}
	}
	
	else
	{
		cout << "Abnormal Height";
	}

	return 0;
}
