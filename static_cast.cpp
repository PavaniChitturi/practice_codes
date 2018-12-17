#include<iostream>
using namespace std;

class complex{
	public:
		int x,y;
		
		void showdata()
		{
			cout<<"x"<<x<<endl;
			cout<<"y"<<y<<endl;
		}
};

int main()
{
	
	complex obj;
	bool x=false;
	float y=0;
	x=static_cast<int>(y);
	cout<<x<<endl;
	//obj=x;
	obj.showdata();
	return 0;
}
