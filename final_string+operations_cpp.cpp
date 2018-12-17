#include<iostream>
#include<string.h>
using namespace std;
string& sanity(string tainted,string checks)
{
	static string strsanity("");
	string alphanum("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 ");
	string check_str = strcat(alphanum , checks);
    size_t found = tainted.find_first_not_of(check_str);
	if(found!=string::npos)
	{
		strsanity = tainted;
	}
	return strsanity;
}
int main()
{
	string str = "";
	cout<<"string"<<sanity("hiiiii+++//* ","!.-+/")<<endl;
}
