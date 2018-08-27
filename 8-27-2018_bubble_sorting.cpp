#include <iostream>
using namespace std;

int main() {
	int n, i, j;
	int a[100];
	
	cout << "Input count of numbers next : ";
	cin >> n;
	cout << "Then input the numbers : ";
	for(i = 0; i < n; i++) {
		cin >> a[i];
	}
	//Bubble Sorting.
	for(i = 0; i < n - 1; i++) {
		for(j = 0; j < n - i - 1; j++){
			if(a[j] > a[j + 1]) {
				int 
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	cout << endl;
	cout << "Sort result : ";
	for(i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
