#include<iostream>
#include <memory>
using namespace std;
int main(){
	struct Player{
		Player(int k,int l){
			x=k; 
			y=l;

		}
		int x;
		int y;
		void display(){
			cout<<"Sit here";
		}
	};


	{
	unique_ptr<int> intptr=make_unique<int>(23);
	*intptr=36;
	cout<<*intptr;
	unique_ptr<Player> playerptr=make_unique<Player>(23,68);
	cout<<playerptr->x<<playerptr->y;
    }





	return 0;
}