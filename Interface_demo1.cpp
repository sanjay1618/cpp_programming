#include <iostream>
#include<string>
using namespace std;
class Iface{
public:
	virtual void demo()=0;
	virtual int get_data()=0;
};
class C1:public Iface{
public:
	int get_data(){
		cout<<"data is data"<<endl;
		return 12;
	}
	void demo(){
		cout<<"This is jsut demo of inteface"<<endl;
	}
};

int main(){
	C1 c;
	c.get_data();


	return 0;
}


//pure virtual functions has to be definetly implemented in the child classes if you inherit
//you cannot create objects of Abstract class..
//Untill you implement all virtual functions that class is still the abstract class.`