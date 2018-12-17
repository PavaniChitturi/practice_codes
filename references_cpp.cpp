#include<iostream>
using namespace std;
class A{
	public:
	void get(int &x,int &y)
	{
		cout<<x<<y<<endl;
	}
};

int main()
{
	A obj1;
	int x=3,y=5;
	obj1.get(x,y);
}
