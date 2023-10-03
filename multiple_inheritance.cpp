#include<iostream>
#include<memory>
#include<string>
using namespace std;
class student{
private:
	string name;
	long id;
public:
	void get_data(){
		cout<<"name of the student"<<name;
		cout<<"ID of the student"<<id;
	}
	void set_data(){
		cout<<"enter name";cin>>name;
		cout<<"enter the id";cin>>id;
	}
};
class employee{
private:
	string role;
	string org;
public:
	void get_data(){
		cout<<"role of the employee"<<role;
		cout<<"org of the employee"<<org;
	}
	void set_data(){
		cout<<"Enter role";cin>>role;
		cout<<"Enter org";cin>>org;
	}
};
class manager:private student,private employee{
	
}
int main(){








	return 0;
}