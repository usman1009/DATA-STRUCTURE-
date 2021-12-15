#include<stdio.h>
#include<stdlib.h>
int cq[4];
void enqueue(int value);
void dequeue();
void display();
int front=-1;
int rear=-1;

void main()
{
int choice,num;
clrscr();
while(1){
printf("\n*****MENU*****\n");
printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n ");
printf("Enter your choice:");
scanf("%d",&choice);
switch(choice){
case 1:
printf("\nEnter the value to be insert:");
scanf("%d",&num);
enqueue(num);
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
printf("\Wrong selection!! Please try again!!\n");
}
}
}

void enqueue(int value)
{
if(front==(rear+1)%4)
printf("\nQueue overflow");
else if(front==-1 && rear==-1)
{
rear=0;
front=0;
cq[rear]=value;
printf("\n%d inserted to queue",value);
}
else
{
rear=(rear+1)%4;
cq[rear]=value;
}
}

void dequeue()
{
int data;
if(front==-1)
printf("\nQueue is empty");
else if(front==rear)
{
data=cq[front];
front=-1;
rear=-1;
printf("\n%d is removed from from queue",data);
}
else
{
data=cq[front];
front=(front+1)%4;
printf("\n%d is removed from the queue",data);
}
}

void display()
{
int i;
int r=rear;
int f=front;
if((rear==-1)&&(front==-1))
{
printf("\nThere is no element to display");
}
else
{
if(f==r)
printf("%d",cq[r]);
else if(r>f)
{
for(i=f;i<=r;i++)
printf("%d->",cq[i]);
}
else if(r<f)
{
for(i=f;i<=4;i++)
printf("%d->",cq[i]);
for(i=0;i<=f;i++)
printf("%d->",cq[i]);
}
}
}
