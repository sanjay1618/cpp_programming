#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int s;
	cin>>s;
	int lo=0,hi=n-1;
	while(lo<hi){
		if(arr[lo]+arr[hi]>s){
			hi--;
		}
		else if(arr[lo]+arr[hi]<s){
			lo++;
		}
		else{
			cout<<"pair found";
			break;
		}
	}




	return 0;
}