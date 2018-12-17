#include<stdio.h>

int main()
{
	int a=10;
	const int x =25;
	int *ptr;
	const int *ptr1;
	int *const ptr2 = &a;
	const int *const ptr3 = &x;
	ptr1=&a;
	ptr1=&x;
	//ptr2=&a;
	//ptr2=&x;
	//ptr3=&x;
	
	
	return 0;
}
