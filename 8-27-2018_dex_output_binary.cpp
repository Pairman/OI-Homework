#include <iostream>
using namespace std;

int main() {
	int n, i = 0, a[30];
	
	cin >> n;
	while(n > 0) {
		a[i++] = n % 2;
		n = n / 2;
	}
	for(i--;i>=0;i--) {
		cout << a[i];
	}
}
