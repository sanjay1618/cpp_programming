#include<iostream>
#include<memory>
#include<string>
using namespace std;
class Product{
public:
	int cost;
	float discount;
	string name;
public:
	Product(int c,float d,string s){

		cost=c;
		discount=d;
		name=s;
	}
public:
	void display(){
		cout<<cost<<" "<<discount<<"  "<<name;
	}
	Product * pointer(){
		return this;
	}
};
int main(){
	Product obj1(1345,14,"iphone");
	obj1.display();
	Product * ptr=&obj1;
	ptr->cost=123;
	obj1.display();
	
	cout<<ptr;






	return 0;
}