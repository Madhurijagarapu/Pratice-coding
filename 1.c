#include<stdio.h>
int main()
{
	int arr[10] = {10,20,30,40,50,60,70,80,90,22};
	printf("%p %p %p %p %p %p %p %p %p %p",&arr[1],&arr[2],&arr[3],&arr[4],&arr[5],&arr[6],&arr[7],&arr[8],&arr[9],&arr[10]);
}
