#include<iostream>
#include <memory>
using namespace std;
void setX(const int x){
		x=x+1;
	};

int main(){
	const int MAX_V=10;
	int * ptr=(int *)&MAX_V;
	*ptr=45;
	int const x=19;
	setX(45);



	return 0;
}