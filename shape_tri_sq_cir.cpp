#include <iostream>
#include<string>
using namespace std;
class Shape{
public:
	virtual void display()=0;
};
class Triangle:public Shape{
	void display(){
		cout<<"This is a triangle shape"<<endl;
	}

};
class Rectangle:public Shape{
	void display(){
		cout<<"This is a Rectangle shape"<<endl;
	}
};
void display_orig(Shape *s){
		s->display();
	}
int main(){
	
	cout<<"Enter the type of shape you wanna print"<<endl;
	string shape;
	cin>>shape;
	if(shape=="Triangle"){
		display_orig(new Triangle());
	}
	else{
		display_orig(new Rectangle());
	}
	return 0;

}