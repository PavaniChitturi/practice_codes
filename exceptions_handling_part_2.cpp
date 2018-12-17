#include<iostream>
using namespace std;
//throw and catching objects

class Base{
	public:
		Base(){
		}
};

class Derived: public Base{
	public:
	Derived(){
	}	
};

int main(){
	try{	
	throw Derived();
	}catch(Derived& D){ 		//here if base is written first, code will not work as expected because 
	/* when derived class is created then first base is created and then dervied is created, so when it is checked for base 
	it will be tru so the first catch will be used and others will be ignored*/
		cout<<"caught derived";
	}catch(Base& B){
		cout<<"caught base";
	}

	return 0;
}
