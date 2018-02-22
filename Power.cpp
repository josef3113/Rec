#include <iostream>
using namespace std;

int PowerRecursive(int NumberToPow,int Power)
{
	if(Power==1)
		return NumberToPow;

	else
	{
		if(Power%2==0)
		{
			return PowerRecursive(NumberToPow,Power/2)*PowerRecursive(NumberToPow,Power/2);
		}

		else    //power is odd
		{
			return NumberToPow*PowerRecursive(NumberToPow,Power/2)*PowerRecursive(NumberToPow,Power/2);
		}
	}
}


int PowerIterativ(int NumberToPow, int Power)
{
	int Original_Number=NumberToPow;
	int PowerOdd=1;

	while(Power!=1)
	{
		
		NumberToPow=NumberToPow*NumberToPow;
		if(Power%2==1)
		{
			Power=Power-1;
			PowerOdd=PowerOdd*Original_Number;
		}

		Power=Power/2;
	}
	return NumberToPow*PowerOdd;
}

void main ()
{
	cout<<PowerRecursive(5,9)<<endl;
	cout<<PowerIterativ(5,9)<<endl;
	system("pause");
}