#include<iostream>
#include<memory>
using namespace std;

class Logger{
public:
	
	Logger(){
		cout<<"New instance is created";
	}

	void log(string msg){
	
		cout<<msg<<endl;
	}

}
int main(){
	Logger* logger1=new Logger();
	Logger* logger2=new Logger();
	logger1->log("user 1");
	

}