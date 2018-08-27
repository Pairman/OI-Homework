#include <iostream>
using namespace std;

int sumof(int n) {
	int i, f = 0;
    for(i = 1; i < n; i++) {
        if(n % i == 0){
            f += i;
        }
	}
	return f;
}

int main() {
	int n;
	cout << "Input a limit : ";
	cin >> n;
	
	for(int a = 2; a <= n; a++) {
		int b = sumof(a);
		int x = sumof(b);
		if(a == x && a < b) {
			cout << a << "," << b << endl;
		}
	}
}
