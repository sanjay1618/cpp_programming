#include <iostream>
#include<string>
using namespace std;
class Product{
public:
	int x;
	int y;
	Product(int x,int y){
		this->x=x;
		this->y=y;
	}
	Product(){

	}
	void display(){
		cout<<x<<"   "<<y<<endl;
	}


	

}; 
class Bike:public Product{
public:
	void display2(){
		cout<<" bikes display is called"<<endl;
	}
	void display(){
		cout<<"Display method is caled"<<endl;
	}
};
int main(){
	Product *e=new Product(12,12);
	Bike *b=new Bike();
	e=b;
	e->display();
	return 0;
};