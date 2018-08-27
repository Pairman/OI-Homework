#include <iostream>
using namespace std;

int main()  {
	int factor = 1, sum = 0, n;
	cout << "Input a number : ";
	cin >> n;
	
	for(int i = 1; i <= n; i++) {
		factor = factor * i;
		sum += factor;
	}
	cout << factor;
}
