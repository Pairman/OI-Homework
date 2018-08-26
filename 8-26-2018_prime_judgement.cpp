#include<iostream>
using namespace std;

int main(){
	int s=1, n, d;
	cin>>n;
	for(d=2; d<n; d++){
		if(n%d == 0){
			s = 0;
			break;
		}
	}
	if(s == 0){
		cout << "false";
	}
	else{
		cout << "true";
	}
}
