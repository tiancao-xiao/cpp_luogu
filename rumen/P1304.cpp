// P1304 哥德巴赫猜想
#include <bits/stdc++.h>
using namespace std;
int a[1029][1029],b[1029][1029];
long zs(long long a2){
	for(int i=2;i<a2;i++){
		if(a2%i==0){
			return 0;
		}
	}
	return 1;
}
void gdbh(long long a1){
	for(int i=2;i<=a1;i++){
		if(zs(i)==1){
			if(zs(a1-i)==1){
				cout<<a1<<"="<<i<<"+"<<a1-i;
				return;
			}
		}
	}
}
int main(){
	long long a1;
	cin>>a1;
	for(long long i=4;i<=a1;i+=2){
		gdbh(i);
		cout<<endl;
	}
	return 0;
}
