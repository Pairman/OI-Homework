#include<iostream>

using namespace std;

int mygcd(int a, int b);

int main()
{
	int a[3];
	int i, big, sml, g;
	
	cin >> a[0] >> a[1] >> a[2];
	big = a[0];
	sml = a[0];
	for(i = 0; i < 2; i++)
	{
		if(a[i] > big)
		{
			big = a[i];
		}
		if(a[i] < sml)
		{
			sml = a[i];
		}
	}
	g = mygcd(big, sml);
	cout << sml / g << '/' << big / g << endl;
}

int mygcd(int a, int b)
{
	int tmp;
	
	while(b > 0)
	{
		tmp = a % b;
		a = b;
		b = tmp;
	}
	return(a);
}



 
