#include <iostream>
#include<string>
using namespace std;
class stacke{
protected:
	int st[10];
	int top;
public:
	stacke():top(-1){};
	void push(int c){
		this->st[++this->top]=c;
	}
	int pope(){
		return this->st[this->top--];
	}
	int peeke(){
		return this->st[this->top];
	}
};
class stack2:public stacke{
public:
	void pushe(int k){
		cout<<"derived class push is callld"<<endl;
		if (this->top>=9){
			cout<<"Stack overflow";
			exit(1);

		}
	     this->st[++this->top]=k;
	}
	int pope(){
		if(this->top<0){
			cout<<"stack is empty"<<endl;
		}
		return this->st[this->top--];
	}

};
int main(){
	stack2 s;
	s.pushe(12);
	s.pushe(12);
	s.pushe(45);
	s.pope();
	return 0;
}