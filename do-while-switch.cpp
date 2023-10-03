#include <iostream>
using namespace std;
int main(){
	char symbol;
	int a,b,c;
	char do_you_want='n';
	cout<<"welcome to the calcii\n";
	do{
		cout<<"iput the operands\n";
		cin>>a>>b;
		cout<<"input the operation\n";
		cin>>symbol;
		switch(symbol) {
			case '+':
			  cout<<(a+b)<<endl;
			  break;
			case '-':
			  cout<<(a-b)<<endl;
			  break;
			case '*':
			  cout<<(a*b)<<endl;
			  break;

			


		}
	cout<<"do you wanna continue";
	cin>>do_you_want;
	

	}while(do_you_want=='y');
	return 0;
}