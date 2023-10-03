#include <iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	vector<int> a;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);
	a.push_back(5);
	//initailsiation of vector with another vector....

	vector<int> a2(a.begin(),a.end());
	cout<<(a==a2);
	//inserting an element in the middle...
	a.insert(a.begin()+3,89);
	//creation of an iterator....
	vector<int>::iterator it;
	for(it=a.begin();it!=a.end();it++){
		cout<<*it<<endl;
	}
	//
	cout<<"*********"<<endl;
	//sorting a vector...
	sort(a.begin(),a.end());
	for(it=a.begin();it!=a.end();it++){
		cout<<*it<<endl;
	}

	return 0;
}