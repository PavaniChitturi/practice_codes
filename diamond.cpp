#include<iostream>
using namespace std;

class A{
	public:
		int data;
		A()
		{
			data = 0;
			cout<<"cons of A"<<endl;
		}
		virtual void func() {
		};
};

class B:  public A{
	public:
		int Bdata;
		B()
		{
			Bdata = 0;
			cout<<"cons of B"<<endl;
		}
		void func() {
		};
};

class C: public A{
	public:
		int Cdata;
		C()
		{
			Cdata = 0;
			cout<<"cons of C"<<endl;
		}
		void func() {
		};
}; 

class D: public B,public C{
	public:
		int Ddata;
		D()
		{
			Ddata = 0;
			cout<<"cons of D"<<endl;
		}
};
int main()
{
D objD;	
//objD.data  = 10;
objD.func();
}
