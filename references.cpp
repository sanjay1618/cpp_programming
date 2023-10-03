#include <iostream>
using namespace std;
void fun(int &x,int &y){
	int temp=x;
	x=y;
	y=temp;


}
int main(){
	int x=7;
	int y=8;
	fun(x,y);
	cout<<x<<endl;
	cout<<y<<endl;
	//it really changed the original value 





	return 0;
}