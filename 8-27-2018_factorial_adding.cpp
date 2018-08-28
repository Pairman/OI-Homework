#include <iostream>
using namespace std;

int factorial(int j)  {
	long long factor = 1;
	long long s = 0;
	
	for(int i = 1; i <= j; i++) {
		factor = factor * i;
	}
	s += factor;
	return s;
}

int main() {
	long long S = 0;
	int N;
	cin >> N;
	for(int j = 1; j <= N; j++) {
		S += factorial(j);
	}
	cout << S << endl;
}
