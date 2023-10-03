#include<iostream>
#include<memory>
#include<string>
using namespace std;
class Base{
public:
	int pub=0;
	int getpub(){
		return pub;
	}
private:
	int priv=0;
	int getpriv(){
		return priv;
	}
protected:
	int prot=0;
	int getprot(){
		return prot;
	}
};
class Derived:public Base{
	



}
int main(){




	return 0;
}