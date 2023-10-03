#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];  
	}
	int lo=0,hi=n-1;
	while(lo<hi){
		while(arr[lo]==0 and lo<hi){
			lo++;
		}
		while(arr[hi]==1 and lo<hi){
			hi--;
		}
		if(lo<hi){
			arr[lo]=0;
			arr[hi]=1;
			lo++;
			hi--;
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}



	return 0;
}
