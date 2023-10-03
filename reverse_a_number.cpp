#include<iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	int d=0;
	
	while(a!=0){
		
		d=d*10+a%10;
		a=a/10;


	}
	cout<<d;
	




	return 0;
}