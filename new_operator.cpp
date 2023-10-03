#include<iostream> 
using namespace std;
int main(){
	int * ptr= new int(8);
	cout<<*ptr;
	//creating an array in heap area...
	int * arr=new int[10];
	for(int i=0;i<10;i++){
		cin>>arr[i];
	}
	for(int i=0;i<10;i++){
		cout<<arr[i]<<endl;
	}
	int * x=new int(no throw)(10);
	if(!x){
		cout<<"memory error";
	}





	


	return 0;
}