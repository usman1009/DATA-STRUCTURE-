#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node {
int data;
struct node *next;
};
struct node *head;
void main()
{
int choice=0;
printf("\nSTACK USING LINKED LIST\n");
printf("\n_______________________\n");
while(choice!=4)
{
printf("\nCHOOSE ONE FROM BELOW...\n");
printf("\n1.PUSH \n2.POP \n3.DISPLAY 4.EXIT");
printf("ENTER YOUR CHOICE:");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
push();
break;
}
case 2:
{
pop();
break;
}
case 3:
{
display();
break;
}
case 4:
{
printf("exiting..");
break;
}
default:
{
printf("enter a valid choice: ");
}
};
}
}

void push()
{
int val;
struct node *newNode = malloc(sizeof(struct node));
printf("Enter the value");  
scanf("%d",&val);  
if(head==NULL)
{
newNode->data=val;
newNode->next=NULL;
head=newNode;
}
else
{     
newNode->data = val;
newNode->next=head;
head=newNode;
}
printf("Item pushed"); 
} 


void pop()
{
struct node *temp;
if(head == NULL)
printf("Stack is Empty\n");
else
{
printf("Poped element = %d\n", head->data);
temp=head;
head=head->next;
free(temp);
printf("item popped");
}
}

void display()  
{  
int i;  
struct node *ptr;  
ptr=head;  
if(ptr == NULL)  
{  
printf("Stack is empty\n");  
}  
else  
{  
printf("Printing Stack elements \n");  
while(ptr!=NULL)  
{  
printf("%d\n",ptr->data);  
ptr = ptr->next;  
}  
}  
}  



