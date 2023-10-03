#include <iostream>
#include<string>
using namespace std;
class Product{
public://private is the default visibility in c++ and it means data members and member funcios cannot be accessed outside of class definition.
	int cost;
	int GST;
	string name;

	//constructor is mainly used for the initialization of variables 
	//by default there exists a constructor which initializes the variables with random values
	//for default constructor there is no need of ();
	
	Product(int c,int g){
		cost=c;
		GST=g;


	};
	void display(){
		cout<<total(cost,GST);
	};
private:
	int total(int cost,int GST){
		int total;
		total=cost+GST;
		return total;
	};





};
int main(){
	Product iphone(134,23);
	
	iphone.display();





	return 0;
}