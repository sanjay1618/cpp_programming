#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
	
	
	string sanjay="sanjay@sanjay";
	//how to tokensize any string in cc++..?
	char* tokn=strtok(&sanjay[0],"@");
	cout<<tokn<<endl;

	//comparing two strings
	string x,y;
	x="sanjay";
	y="sanj";  //0->if not same; or 1
	cout<<(x==y);
	//to_string function is used to convert any datatype to string
    int yy=4665;
    string k=to_string(yy);
    cout<<k;
    //stoi()is used for converting string to integer
    string strgg="1234a45aa";
    yy=stoi(strgg);
    cout<<yy;




	return 0;
}

