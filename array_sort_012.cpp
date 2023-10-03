#include<iostream>
using namespace std;
void sort012(int arr1[],int m){
		int l=0,m=0,h=n-1;
		while(m<=h){
			if(arr[m]==0){
				swap(arr[l],arr[m]);
				l++;
				m++;

			}else if(arr[m]==1){
				m++;

			}else if(arr[m]==2){
				swap(arr[m],arr[h]);
				h--;
				m++;
			}
			
		}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
		swap012(arr,n);
		for(int i=0;i<n,i++){
			cout<<arr[i]<<endl;s
		}
	}





	return 0;
}