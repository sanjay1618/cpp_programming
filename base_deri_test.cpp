#include <iostream>
#include<string>
using namespace std;
class Base{
protected:
	int count;
	int testee;
public:
	Base(){
		cout<<"base const 1 called\n";
	}
	Base(int c){
		//count=c;
		cout<<"base const 2 called\n";
	}
	

};
class Deri:public Base{
public:
	int d_count;
	Deri(){
		cout<<"deri const 1 called\n";
	}
	Deri(int c,int d){
		d_count=c;
		count=d;
		cout<<"deri const 2 called\n";
	}
	void oper(){
		testee=testee+122;
	}
};
int main(){

	Deri d(12,13);
	cout<<sizeof(d);
	//cout<<d.testee<<endl;


	return 0;
}


