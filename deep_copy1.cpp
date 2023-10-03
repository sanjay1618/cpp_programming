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
	//creating our own copy constructor of deep copy type.....
	//syntax is classname(classname & anyobject){


//       }


	ComplexNumber(ComplexNumber &c){//custom copy constructor ...which will create ptrs alwasy

		this->real=c.real;
		this->img=c.img;
		this->ptr=new int;
		*ptr=*(c.ptr);
	}

};
int main(){
     ComplexNumber a(12,3);
     int x=27;
     a.ptr=&x;
     ComplexNumber b(a);
     *(a.ptr)=0;
     cout<<*(a.ptr)<<"     "<<*(b.ptr);












	return 0;
}