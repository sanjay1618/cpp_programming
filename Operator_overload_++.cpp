	#include <iostream>
	#include<string>
	using namespace std;
class Test{
public:
		int count;
		Test():count(0){}
		void get_count(){
			cout<<count<<endl;
		}
		Test(int x):count(x){}
	     //case 1 for prefix operator overloading...
		
		
	
	void operator ++(){
		++this->count;
	
	}
	void operator ++(int){//syntax for postfix operator overloading...
		this->count++;	
	}

	//case 3: + overloading..
	Test operator +(Test s){
		int temp=this->count +s.count;
		return Test(temp);

	}
};
int main(){
	Test t;
	t.get_count();
	++t;
	t.get_count();
	Test l(6);
	Test k=t+l;
	k.get_count();


	return 0;
}