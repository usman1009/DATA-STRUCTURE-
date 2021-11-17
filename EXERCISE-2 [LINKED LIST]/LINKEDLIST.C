#include<stdio.h>
#include<stdlib.h>
struct node  
{
 int data;
 struct node *next;  
};
struct node *head;
void beginsert ();  
void lastinsert ();
void randominsert();
void begindelete();
void lastdelete();
void randomdelete();
void display();
void search();
int main ()
{
int choice =0;
while(choice != 9)  
 {
printf("1.insert beginning\n 2.insert end\n 3.insert random\n 4.delete beginning \n5.delete end\n 6.delete random \n7.search element\n 8.display \n9.exit\n");
printf("\nEnter your choice?\n");        
scanf("\n%d",&choice);
switch(choice)
{

case 1:beginsert();    
break;
case 2: lastinsert();
break;
case 3:randominsert();
break;
case 4:begindelete();      
break;
case 5:lastdelete();      
break;
case 6:randomdelete();        
break;
case 7:search();
break;
case 8:display();      
break;
case 9:exit(0);
break;
default:printf("Please enter valid choice..");

}

}

}
void beginsert()
{
struct node *ptr;
int item;
ptr = (struct node *) malloc(sizeof(struct node *));
if(ptr == NULL)
{
printf("\nOVERFLOW");
}  
else
{
printf("\nEnter value\n");  
scanf("%d",&item);  
ptr->data = item;
ptr->next = head;
head = ptr;
printf("\nNode inserted");
}    
}
void lastinsert()
{
struct node *ptr,*temp;
int item;    
ptr = (struct node*)malloc(sizeof(struct node));    
if(ptr == NULL)
{
printf("\nOVERFLOW");    }
else
{
printf("\nEnter value?\n");
scanf("%d",&item);
ptr->data = item;
if(head == NULL)
{
ptr -> next = NULL;
head = ptr;
printf("\nNode inserted");
}
else
{
temp = head;
while (temp -> next != NULL)
{
temp = temp -> next;
}
temp->next = ptr;
ptr->next = NULL;
printf("\nNode inserted");
}
}
}

void randominsert()
{
int i,loc,item;  
struct node *ptr, *temp;
ptr = (struct node *) malloc (sizeof(struct node));
if(ptr == NULL)
{
printf("\nOVERFLOW");
}
else
{
printf("\nEnter element value");
scanf("%d",&item);
ptr->data = item;
printf("\nEnter the location  which you want to insert ");
scanf("\n%d",&loc);
temp=head;
for(i=0;i<loc;i++)
{
temp = temp->next;
if(temp == NULL)
{
printf("\ncan't insert\n");
return;
}
}
ptr ->next = temp ->next;  
temp ->next = ptr;  
printf("\nNode inserted");
}
}
void begindelete()
{
struct node *ptr;
if(head == NULL)
{
printf("\nList is empty\n");
}
else  
{
ptr = head;
head = ptr->next;
free(ptr);
printf("\nNode deleted from the begining\n");
}
}
void lastdelete()
{
struct node *ptr,*temp;
if(head == NULL)
{
printf("\nlist is empty");
}
else if(head -> next == NULL)
{
head = NULL;
printf("\nOnly node of the list deleted \n");
}
else
{
ptr = head;  
while(ptr->next != NULL)
{
temp = ptr;
ptr = ptr ->next;
}
temp->next = NULL;
free(ptr);
printf("\nDeleted Node from the last .\n");
}    
}
void randomdelete()
{
struct node *ptr,*ptr1;
int loc,i;  
printf("\n Enter the position of the element to delete \n");
scanf("%d",&loc);
ptr=head;
for(i=0;i<loc;i++)
{
ptr1 = ptr;      
ptr = ptr->next;
if(ptr == NULL)
{
printf("\nCan't delete");
return;
}
}
ptr1 ->next = ptr ->next;
free(ptr);
printf("\nDeleted node %d ",loc+1);
}
void search()
{
struct node *ptr;
int item,i=0,flag;
ptr = head;  
if(ptr == NULL)
{
printf("\nEmpty List\n");
}
else
{  
printf("\nEnter item which you want to search?\n");  
scanf("%d",&item);
 while (ptr!=NULL)
{
 if(ptr->data == item)
{
printf("item found at location %d ",i+1);
flag=0;
}  
else
{
flag=1;
}
i++;
ptr = ptr -> next;
}
if(flag==1)
{
printf("Item not found\n");
}
}          
}
void display()
{
struct node *ptr;
ptr = head;  
if(ptr == NULL)
{
printf("oops!!! not found");
}
else
{
printf("\n values\n");  
while (ptr!=NULL)
{
printf("\n%d\n",ptr->data);
ptr = ptr -> next;
}
}
}    


             

 

 


 




