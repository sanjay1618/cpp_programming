#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if((a+b>c) and (a-b<c)){
		cout<<" it is a triangle";
	}
	
	else
	{
		cout<<" it is not a triangle";
	}



	return 0;
}