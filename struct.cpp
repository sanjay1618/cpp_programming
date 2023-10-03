#include <iostream>
using namespace std;
struct Complex{
	int real;
	int imag;
	Complex multiply(Complex a,Complex b){
		Complex c;
		c.real=0;
		c.imag=0;
		c.real=a.real*b.real;
		c.imag=a.imag*b.imag;
		return c;
	}


	
};
int main(){
	Complex a={1,2};
	Complex b={3,5};
	Complex d=Complex.multiply( a, b);

	cout<<d.real;


	



	return 0;
}