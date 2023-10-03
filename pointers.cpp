#include<iostream>
using namespace std;
int main(){
	int arr[]={1,2,3,4,5,6};
	int n=6;
	
	
	// how to use pointers to access the elements of array
	for(int i=0;i<6;i++){
		cout<<i<<"  "<<(arr+i)<<" "<<*(arr+i)<<'\n';
	}





	return 0;
}

