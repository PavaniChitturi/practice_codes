#include<iostream>
using namespace std;
int main()
{
	int i =5;
	cout<<"i++"<<i++<<endl;
	cout<<"++i"<<i++<<endl;
	cout<<"i--"<<i++<<endl;
	cout<<"--i"<<i++<<endl;
	//try is a block of code where error can occur
	try{
		int mom,son;
		mom =30;
		son = 34;
		if(son >mom) //
		{
			//exception occured 
			throw 99;
		}
		
		//to handle error
		
	}catch(int x)//error is caught here     
	{
		cout<<"son cant be older than mom"<<x<<endl;
	}
	return 0;
}

