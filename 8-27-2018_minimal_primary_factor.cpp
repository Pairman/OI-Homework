#include <iostream>
using namespace std;

int main() {
	int a, b, temp;
	cout << "Input 2 numbers : ";
	cin >> a;
	cin >> b;
	
	if(a > b) {
		while(b > 0) {
			temp = a % b;
			a = b;
			b = temp;
		}
		cout << "Minimal Primary Factor : " <<  a;
	} else {
		while(a > 0) {
			temp = b % a;
			b = a;
			a = temp;
		}
		cout << "Minimal Primary Factor : " << b;
	}
}
