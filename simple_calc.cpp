#include<iostream>
//basic calculator program
using namespace std;
int main()
{
	float *a = new float();
	float *b = new float();
	float *sum =new float();
	cout<<"enter 2 numbers";
	cin>>*a>>*b;
	cout << *sum <<endl;
	*sum = *a+*b;
	cout<<"sum of number is "<<*sum<<endl;
}
