#include <iostream>
using namespace std;

int main() {
	int n, judge = 0;
	cin >> n;
	for(int i = 2; i < n; i ++) {
		if(n % i == 0) {
			judge = 1;
			break;
		}
	}
	if(judge == 0) {
		cout << "True";
	} else {
		cout << "False";
	}
}
