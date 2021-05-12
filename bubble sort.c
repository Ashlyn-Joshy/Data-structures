/*
 ============================================================================
 Name        : bubble.c
 Author      : ASHLYN
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void bubble(int a[],int n)
{
	int b,i,temp;
	for(b=0;b<n-1;b++)
	{
		for(i=0;i<n-1-b;i++)
		{
			if(a[i]>a[i+1])
			{
					temp=a[i];
					a[i]=a[i+1];
					a[i+1]=temp;
			}
		}
	}
}
void printarray(int a[],int n)
{
	int i;
	for(i=0;i<5;i++)
		printf("%d \t",a[i]);
}
int main(void) {
	printf("sort the elements in the array \n"); /* prints  */
	printf("elements in the array are \n");
	int a[]={15,24,36,14,22};
	int n=sizeof(a)/sizeof(a[0]);
	printarray(a,n);
	printf("\n after the  bubble sort  \n");
	bubble(a,n);
	printarray(a,n);

}
