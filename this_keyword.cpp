#include <iostream>
#include<string>
using namespace std;

class Metal{
	//when an object is created, inside the object there is one pointer called as this.
	//this will store the address of itself i.e the address of the object.

	//'this' keyword will help during the initialziation of values.

public:
	int e_no;
	int weight;
	string e_name;
	Metal(string e_name,int e_no,int weight){//if you see constructor parameters and actual data member names are same. so to differentiate them we use this.
		this->e_name=e_name;
		this->e_no=e_no;
		this->weight=weight;


	};
	void display(){
		cout<<e_name<< "    "<<e_no<< "   "<<weight;
	};
};
int main(){




	Metal sodium("sodium",11,23);
	sodium.display();

	return 0;
};