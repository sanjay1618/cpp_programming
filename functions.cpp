#include<iostream>
using namespace std;
int fun1( int x){
		cout<<x<<endl;
		return x;
	}
int swap(int x,int y){
	int temp=x;
	x=y;
	y=temp;
	
	return x,y;

}

int main(){
	fun1(66);
	swap(22,33);
	
	return 0;




}