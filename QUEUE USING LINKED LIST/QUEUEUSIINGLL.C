#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node {
int data;
struct node *next;
}*rear=NULL,*front=NULL;

void insert(int);
void dequeue();
void display();

void main()
{
int choice,value;
clrscr();
printf("\nqueue implementation using linked list\n");
while(1){
printf("1. insert\n2. delete\n3. display\n4. exit ");
printf("enter your choice:");
scanf("%d",&choice);
switch(choice){
case 1:
printf("enter the value to be inserted:");
scanf("%d",&value);
insert(value);
break;
case 2:
dequeue();
break;
case 3:
display();
break;
case 4:
exit(0);
default:
printf("\nwrong selection!! please try again!!\n");
}
}
}

void insert(int value)
{
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data = value;
newnode->next = NULL;
if(front==NULL)
front=rear=newnode;
else{
rear->next=newnode;
rear=newnode;
}
printf("\ninsertion is success\n");
}

void dequeue()
{
if(front==NULL)
printf("\nqueue is empty\n");
else{
struct node *temp = front;
front = front->next;
printf("\nthe deleted element:%d\n",temp->data);
free(temp);
}
}

void display()
{
if(front==NULL)
printf("\n queue is empty\n");
else{
struct node *temp=front;
while(temp->next!=NULL){
printf("%d-->",temp->data);
temp = temp->next;
}
printf("%d-->",temp->data);
}
}



