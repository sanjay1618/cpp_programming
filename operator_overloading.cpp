#include<iostream>
#include<memory>
using namespace std;
int main(){
	int operator +(int &x,int &y){
		return x+y+12;
	}
	cout<<1+1;





	return 0;
}