#include<iostream>
#include<memory>
using namespace std;
class ComplexNumber{
public:
	int real;
	int img;
	int *ptr;
	ComplexNumber(int real,int img){
		this->real=real;
		this->img=img;
		
	}

};

int main(){
	ComplexNumber a(12,34);
	//this will call the copy constructor which will initize the new object from a existing object
	//of same class....
	//this type of copy is called as shallow copy becasue any changes in the new object will not reflect in the original one.
	 
    
    
    ComplexNumber b(12,34);
    int x=10;
    b.ptr=&x;
    ComplexNumber c=b;
    cout<<*(b.ptr)<<"    "<<*(c.ptr);
    *(b.ptr)=12;
    cout<<*(b.ptr)<<"    "<<*(c.ptr);



	 //see the change in the value of d didnot reflect in the value of a


//shallow copy means an object is created by just copying data of all values of existing object.




	return 0;
}