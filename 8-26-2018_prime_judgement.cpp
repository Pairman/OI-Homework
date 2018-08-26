#include<iostream>
using namespace std;

int main(){
	int count=0,N,i;
	cin>>N;
	for(long i=1;i<=2147483648;i++){
		if(N%i == 0){
			count++;
		}
	}
	if(count == 2){
		cout << "true";
	}
	else{
		cout << "false";
	}
	return 0;
}
