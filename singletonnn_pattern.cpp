#include<iostream>
#include<memory>
using namespace std;



class Logger1{
private:
	
	static Logger1* loggerinstance;
	
	Logger1(){
		static int count;
		count++;
		

		
		cout<<"New instance is created\n";cout<<"number of instances is"<<count<<endl;

	}
public:

	void log(string msg){
	
		cout<<msg<<endl;
	}
	static Logger1* getlogger(){
		if(loggerinstance==nullptr){
			loggerinstance=new Logger1();
		}
		return loggerinstance;

	}

};
Logger1* Logger1::loggerinstance=nullptr;


int main(){

	

	Logger1* logger1=Logger1::getlogger();
	logger1->log("user 1");

	Logger1* logger2=Logger1::getlogger();
	logger2->log("user 2");




}