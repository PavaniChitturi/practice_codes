//delete this operator
//virtual function

#include<iostream>

using namespace std;

class A{
	public:
		int i;
		const void func()
		{
			cout<<"in parent"<<endl;
		}
};

class B :  public A{
	public:
		int j;
		B(int x)
		{
			x=j;
		}
		
		B(){}
		const void func()
		{
			cout<<"in child"<<endl;
		}
};
int main()
{
	A objA;
	const B objB(10);
	B obj2;
	//for static function 
	//A::func();
	//obj.func();
	
	//for const function
	//obj.func();
	
	objA.func();
	objB.func();
				
	return 0;
}
