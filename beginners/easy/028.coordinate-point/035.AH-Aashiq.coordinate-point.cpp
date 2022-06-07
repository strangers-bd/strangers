#include<iostream>
using namespace std;
int main()
{
	int X,Y;
	cout << "Input the values for X and Y coordinate: ";
	cin >> X >> Y;
	
	if(X > 0 && Y > 0)
	{
		cout << "The coordinate point" <<'('<<X<<','<<Y<<')' <<"lies in the First quandrant.";
	}
	else if (X < 0 && Y > 0)
	{
		cout << "The coordinate point" <<'('<<X<<','<<Y<<')' <<"lies in the Second quandrant.";
	}
	else if (X < 0 && Y < 0)
	{
		cout << "The coordinate point" <<'('<<X<<','<<Y<<')' <<"lies in the Third quandrant.";
	}
	else if (X > 0 && Y < 0)
	{
		cout << "The coordinate point" <<'('<<X<<','<<Y<<')' <<"lies in the Frouth quandrant.";
	}
	
	else if (X== 0 && Y ==0)
	{
		cout << "The coordinate point" <<'('<<X<<','<<Y<<')' <<"lies at the origin.";
	}
	else
	{
		cout << "Wrong Input";
	}
	
}
