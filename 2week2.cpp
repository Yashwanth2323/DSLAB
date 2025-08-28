#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
}*top = NULL;

void push(int);
void pop();
void display();

int main()
{
	int choice,value;
//    clrscr();
    printf("\n:: stack using Linked List ::\n");
    while(1){
    	printf("\n****** MENU ******\n");
    	printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");	
    	printf("Enter your choice:");
    	scanf("%d",&choice)
    	switch(choice){
       case 1 : printf("Enter the value to be insert: ");
           scanf("%d",&value);
           push(value);
           break;
       case 2 : pop(); break;
       case 3 : display(); break;
       case 4 : exit(); break;
       default: printf("\n")
		}
}
