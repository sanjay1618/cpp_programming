#include <iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
	vector<int> v;
	cout<<v.size()<<"  "<<v.capacity()<<endl;
	v.push_back(12);
	cout<<v.size()<<"  "<<v.capacity()<<endl;
	v.push_back(14);
	cout<<v.size()<<"  "<<v.capacity()<<endl;
	v.push_back(16);
	cout<<v.size()<<"  "<<v.capacity()<<endl;
	//push back is member function of vector to append the elements at the end of vector
	//size is also a member function of vector which will give the current number of elemets
	//capacity will give maximum size.


	vector<int> v1(10);//defining initial size and all values are  garbage..
	vector<int> v2{12,23,45};//defines a vector of size 3 and values are 12 23 45..
	//hOW To iterate over vector..
	for(int i:v2){
		cout<<"Element is:"<<i<<endl;
	}
	//also by refercence also we can do this...
	for(int &ee:v2){
		cout<<"Element is:"<<ee<<endl;
	}
	//also if dont know the type of elements you can use auto :
	for(auto i:v2){
		cout<<"Element is:"<<i<<endl;
	}



	vector<int> u1;
	u1.reserve(10);//this will reserve 10 places without any garbage value..
	u1.push_back(12);
	u1.push_back(7);
	cout<<u1.size()<<"  "<<u1.capacity()<<endl;
	//vectorname.empty() checks if the vector is empty or not...return 0 for false and 1 for empty
	cout<<u1.empty()<<endl;





	return 0;
}