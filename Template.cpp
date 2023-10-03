#include <iostream>
#include<string>
using namespace std;
template<class T>
	T addition(T n,T m){
		return n+m;
	}

template<typename Type>
	class Stack{
	public:
		Type st[10];
		int top;
		Stack(int top){
			this->top=top;
		}
		Type push(Type n){
			st[++top]=n;
		}
	};
	Stack<Type> s;
	s.push(10);
	s.push(12.3f);
//template should always be declared outside of the block scope...
	//templates are used for generics because you dont have to worry about return types.
int main(){
    
	return 0;
}