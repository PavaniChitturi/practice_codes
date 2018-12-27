
#include<stdio.h>
int calc(int a, int b,int option)
{
	if(option == 1)
		return add(a,b);
	else if(option == 2)
		return mul(a,b);
	else
		return 0;
}


int add(int x, int y)
{
	return (x+y);
}

int mul(int x, int y)
{
	return (x*y);
}
int main()
{
	int i=0;
	int (*ptr)(int,int) = NULL;
	int (*ptr2)(int,int,int) = NULL;
	printf("enter the option 1 add and 2 mul");
	scanf("%d",&i);
	ptr2 = &calc;
	switch(i)
	{
		case 1:
			ptr = &add;
			printf("add is %d\n",ptr(10,5));
			break;
		case 2:
			ptr = mul;
			printf("mul is %d\n",ptr(10,5));
			break;
		default:
			printf("0\n");
			break;
	}
	printf("calc is %d\n",ptr2(10,5,i));
	return 0;
}
