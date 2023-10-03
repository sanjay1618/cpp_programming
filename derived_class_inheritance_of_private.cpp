#include <iostream>
#include<string>
using namespace std;
class Base{
public:
	int x;
	void display(){
		cout<<"The value of x is "<<x;
};
class Derived:public Base{
	void display2(){
		cout<<" The value of x"<<x;
	}
};
int main(){
	Derived d;
	cout<<d.x;
	return 0;
}