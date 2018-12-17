#include<iostream>
using namespace std;

int main()
{
	//try and catch will always come
    try{
    	//divide by zero exception
    	int num;
    	int den;
    	cout<<"enter num"<<endl;
    	cin>>num;
    	cout<<"enter den"<<endl;
    	cin>>den;
    	
    	if(den ==0)
    	{
    		throw 0;
		}
		cout << num/den << endl;
	}catch(...){                //catch can have different arguments but cannot be overloaded
								  //catch can also be catch(...) for any type of error, like default catch
		cout<<"denom cant be "<<endl;
	}
		
	return 0;
}
