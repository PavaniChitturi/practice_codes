#include<iostream>
using namespace std;
class Cow{
	public:
	int moo,leg;
	char gender;
	bool good;
};

class goat:public Cow{
	public:
		int m,l;
		char gen;
	//	bool nice;
};
int main()
{
	Cow cow;
	cow.moo = 8;
	cow.leg =5;
	int a=5;
	cow.gender ='f';cow.good = true;
	//Cow* cowptr = &cow;
	goat *goatptr = reinterpret_cast<goat*>(&cow);
	goat* ptr = reinterpret_cast<goat*>(a);
	int* intptr = reinterpret_cast<int*>(&cow);
	cout<<*intptr<<endl;
	intptr+=2;
	char* charptr = reinterpret_cast<char*>(intptr);
	cout<<*charptr<<endl;
	charptr+=1;
	bool* boolptr = reinterpret_cast<bool*>(charptr);
	
	cout<<*boolptr<<endl;
}
