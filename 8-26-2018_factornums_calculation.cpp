#include <iostream>
using namespace std;

int main() {
    int count = 0, N, i;
    cin >> N;
    for(int i=1; i<=2147483648; i++) {
        if(N % i == 0){
            count++;
        }
    }
    cout << count;
    return 0;
}
