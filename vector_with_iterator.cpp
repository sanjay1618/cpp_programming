#include <iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
	vector<int> v;
	v.push_back(12);
	v.push_back(56);
	v.push_back(3);
	cout<<v.size()<<"  "<<v.capacity()<<endl;
	vector<int>::iterator it;//creation of iterator it..
	it=v.end()-1;
	cout<<*it<<endl;
	//v.end() will get the address of next element of last element..
	it=v.begin();
	cout<<*it<<endl;

	//for loop for iterating through the iterators........
	for(it=v.begin();it!=v.end();it++){
		cout<<*it<<endl;
	}
	//printing last element..
	cout<<*(v.end()-1)<<endl;
	//iterators support pointer arithmetic ...
	it=v.begin();
	cout<<*it<<endl;
	++it;
	cout<<*it<<endl;
	cout<<"******************************************"<<endl;
    //we can delete an element in the middle of a vector by using erase fucntion
    //erase function always expects a iterator ..
    v.push_back(8);
    v.push_back(43);
    //now using the erase function to remove the 3 rd element..
    v.erase(v.begin()+2);
    for(it=v.begin();it!=v.end();it++){
		cout<<*it<<endl;
	}
	//we can also remove range of elements by giving start and end...
	//note:last element is not included in the erase...
	v.erase(v.begin(),v.begin()+1);
	 for(it=v.begin();it!=v.end();it++){
		cout<<*it<<endl;
	}
	cout<<"*********************************************************";
	//...............................................................
	v.push_back(1);
	v.push_back(78);
	v.push_back(37);
	v.push_back(76);
	//....................................................................
	v.pop_back();
	




	




	return 0;
}