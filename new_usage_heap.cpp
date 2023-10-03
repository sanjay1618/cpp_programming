#include<iostream>
using namespace std;
int main(){
	//creating a variable in heap memoryyy
	int *ptr=new int;
	cout<<ptr<<endl;
	cout<<*ptr<<endl;  //value of ptr;
	*ptr=899;
	cout<<*ptr;



	return 0;
}
