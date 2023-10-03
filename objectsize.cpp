#include <iostream>
#include<string>
using namespace std;
class Objsize{
public:
	int a;
	long b;
	int d;
	char c;
};
int main(){
	Objsize s;
	cout<<sizeof(s.a)<<"   "<<sizeof(s)<<"  "<<sizeof(s.b)<<endl;
	return 0;
}
//padding is done to make sure all the objects are aligned perfectly.
//padding means the object size is always multiple of largest data member.
//if the real object is not equal to multiple of largest data member,then make it that way.
