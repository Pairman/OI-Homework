#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int r, c;
	for(r = 1; r < 10; r++) {
		for(c = 1; c < 10; c++) {
			cout << r << "*" << c << " ";
		}
		printf("\n");
	}
}
