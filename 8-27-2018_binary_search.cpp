#include <iostream>
using namespace std;

int main()
{
	int n, i, a[1000], mid, pos;
	cout << "Input a scope : ";
	cin >> n;
	int low = 0, high = n - 1;

	for(i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << endl << "And input a keyword : ";
	int key;
	cin  >> key;
	
	low = 0;
	high = n - 1;
	pos = -1;
	
	while(low <= high)
	{
		mid = ( low + high) / 2;
		
		if(key == a[mid])
		{
			pos = mid;
			break;
		}
		
		if(key < a[mid])
		{
			high = mid - 1;
		} else {
			low = mid +1;
		}
	}
	cout << "Result : " << pos;
}
