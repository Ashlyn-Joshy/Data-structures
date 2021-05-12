/*
 ============================================================================
 Name        : circular.c
 Author      : ASHLYN
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
# define n 5
int queue[n];
int front=-1;
int rear=-1;
void enqueue(int x)
{
    printf("the data inserted is %d\n",x);
    if(front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }
    else if((rear+1)%n==front)
    {
       printf("overflow\n");
    }
    else
    {
        rear=(rear+1)%n;
        queue[rear]=x;
    }
}
void peek()
{
    if(front==-1 && rear==-1)
    {
        printf("the queue is empty\n");
    }
    else
    {
        printf("the peek element is %d \n",queue[front]);
    }
}
void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("underflow\n");
    }
    else if(front==rear)
    {
        printf("the delete element is %d \n",queue[front]);
        front=rear=-1;
    }
    else
    {
        printf("the delete element is %d \n",queue[front]);
        front=(front+1)%n;
    }
}
void display()
{
    int i;
    i=front;
    if(front==-1 && rear==-1)
    {
        printf("the queue is empty\n");
    }
    else
    {
        printf("the element in the array are\n");
       while(i!=rear)
       {
           printf("%d ",queue[i]);
           i=(i+1)%n;
       }printf("%d\n",queue[rear]);
    }
}
int main()
{
    printf("circular queue using the array\n");
    enqueue(17);
    enqueue(34);
    enqueue(55);
    enqueue(27);
    dequeue();
    enqueue(20);
    display();
    peek();
    dequeue();
    enqueue(45);
    peek();
    display();
}
