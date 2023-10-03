#include<iostream>
#include<memory>
using namespace std;
class ComplexNumber{
public:
	int real;
	int img;

	ComplexNumber(): real(12),img(34){}//special way to initailise the values ...
	ComplexNumber(int real,int img){
		this->real=real;
		this->img=img;
//we can also implement function outside of class but for that we have to declare functio inside.
	}
	int inside_declare();
	//polymorphism means having many forms. There are two types of polymorphism.1.compile time,2.run time
	//constructor overloading is one example of polymorphism.


};
int ComplexNumber::inside_declare(){
	return 0;
}
//Function overloading means having two or more functions with same function name but differ in parameters.
//functions with same names but different return types cannot be overloaded..
int overloading(){
	return 0;
};
int overloading(int x){
	return 90;
};
//to pass float as an argument we have to explicitly mention 11.1f otherwise it will throw error ..


int main(){
	ComplexNumber c(12,34);
	cout<<c.real<<c.img;









	return 0;
}