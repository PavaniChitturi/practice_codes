#include<stdio.h>

int main()
{
	int arr[5]={1,2,3,4,5};
	int (*ptr)[5]= &arr;
//	printf("%d\n",sizeof(*ptr));
//	*ptr = &arr;
	printf("%d\n %d",sizeof(*ptr),*((int*)ptr+1));
	
	return 0;
}
