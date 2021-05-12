/*
 ============================================================================
 Name        : binary.c
 Author      : ASHLYN
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int binary(int a[],int l,int r,int data)
{
	int mid;
	while(l<r)
	{
		mid=(l+r)/2;
		if(data==a[mid])
			return mid;
		else if(data<a[mid])
			r=mid-1;
		else
			l=mid+1;
	}
	return -1;
}
void printarray(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d \t",a[i]);
}
int main(void) {
	printf("binary search \n"); /* prints  */
	printf("searching for an  element in the array \n");
	printf("for the binary search elements must be in sorted order \n");
	printf("elements in the array are \n");
	int a[]={20,30,35,40,45,50,55,60,65,70};
	int n=sizeof(a)/sizeof(a[0]);
	printarray(a,n);
	int data=65;
	printf("\n the searching element in the array is %d \n",data);
	int result = binary(a,0,n-1,data);
	if(result==-1)
	{
		printf("the element is not found in the array \n");
	}
	else
	{
		printf("the element is  found in the array at index %d \n",result);
		printf("the element is  found in the array at position  %d \n",result+1);
	}
	return EXIT_SUCCESS;
}
