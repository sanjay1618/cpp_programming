#include<iostream>
#include <memory>
using namespace std;
class Counter{
public:
	int x;

	void display(){
		cout<<x;
	}
	Counter(){
		cout<<"Base class constructor is called\n";
		x=0;
		cout<<x;
		
	}
	Counter(int c){
		x=c;
	}
};
class childCounter: public Counter{

public:
	childCounter(int c){
		cout<<"derived class constructor is called\n";
		x=c;
		cout<<x;

	}

	
	


};
int main(){
	childCounter c1(12);
	







	return 0;
}