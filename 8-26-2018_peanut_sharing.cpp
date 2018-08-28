#include<iostream>
using namespace std;

int main() {
	int n, i, a[100] = {1, 0, 1, 1, 0};
	cin >> n;
	for(i=5; i<=n; i++) {
		if(a[i-1] == 0 || a[i-2] == 0 || a[i-4] == 0) {
			a[i] = 1;
		} else {
			a[i] = 0;
		}
		cout << a[n] << endl;
	}

} 
