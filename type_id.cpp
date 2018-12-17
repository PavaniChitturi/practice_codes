#include<iostream>
#include<typeinfo>
using namespace std;

class Base{
};

class one: public Base{
	
};

class two: public Base{
};

void fun(Base *ptr)
{
	std::cout << typeid(*ptr).name() << std::endl;  
}

int main()
{
	Base *ptr = NULL;
	one obj1;
	two obj2;
	ptr = &obj1;
	fun(ptr);
	ptr = &obj2;
	fun(ptr);
	return 0;
}
