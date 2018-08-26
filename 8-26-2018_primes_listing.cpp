#include <iostream>
using namespace std;

int isPrime(int n);

int main() 
{
	int s, times = 0;
	cin >> s;
	for(int n = 2; n <= s; n++) {
		if(isPrime(n) == 1) {
			cout << n << " , ";
			times ++;
		}
	}
	cout << endl << times;
}

int isPrime(int n)
{
	int flag = 1;
	for(int i = 2; i < n; i++)
	{
		if(n % i == 0) 
		{
			flag = 0;
			break;
		}
	}
	return(flag);//for每循环一次，将执行下面的语句，而不是整部循环。 
}
