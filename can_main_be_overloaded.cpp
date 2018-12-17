#include<iostream>
using namespace std;
class A{
	public:
		int num;
		int main(int a)
		{
			return a;
		}
		int main(double x)
		{
			return num;
		}
};

int main()
{
	A obj;
	obj.num=10;
	cout<<obj.main(10.3)<<endl;
	cout<<obj.main(10)<<endl;
	return 0;
}

//this is not possible. In cpp we can only create a class with 
//member function as main and overload it
//int main(int x)
//{
//	cout<<x<<endl;
//}








