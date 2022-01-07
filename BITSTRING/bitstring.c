#include<stdio.h>
void input();
void setunion();
void intersection();
void difference();
int a[]={0,0,0,0,0,0,0,0,0},b[]={0,0,0,0,0,0,0,0,0};
int main()
{
int ch,wish;
do
{
printf("\n___MENU___\n");
printf("1.INPUT\n2.UNION\n3.INTERSECTION\n4.DIFFERENCE\n");
printf("ENTER YOUR CHOICE:");
scanf("%d",&ch);

switch(ch)
{
case 1:input();
	break;
case 2:setunion();
	break;
case 3:intersection();
	break;
case 4:difference();
	break;
}
printf("\nDO YOU WISH TO CONTINUE?(1/0)\n");
scanf("%d",&wish);
}while(wish==1);
}






void input()
{
int n,x,i;
printf("ENTER THE SIZE:\n");
scanf("%d",&n);
printf("ENTER THE ELEMENTS:\n");
for(i=0;i<n;i++)
{
scanf("%d",&x);
a[x-1]=1;
}
printf("ENTER SIZE OF 2ND SET:\n");
scanf("%d",&n);
printf("ENTER THE ELEMENTS:\n");
for(i=0;i<n;i++)
{
scanf("%d",&x);
b[x-1]=1;
}
printf("\n1ST SET\n");
for(i=0;i<9;i++)
{
printf("%d",a[i]);
}
printf("\n2ND SET\n");
for(i=0;i<9;i++)
{
printf("%d",b[i]);
}
}




void setunion()
{
int i,c[10];
for(i=0;i<9;i++)
{
if(a[i]!=b[i])
c[i]=1;
else c[i]=a[i];
}
for(i=0;i<9;i++)
{
printf("%d",c[i]);
}
}




void intersection()
{
int i,c[10];
for(i=0;i<9;i++)
{
if (a[i]==b[i])
c[i]=a[i];
else 
c[i]=0;
}
for(i=0;i<9;i++)
{
printf("%d",c[i]);
}

}



void difference()
{
int i,c[10];
for(i=0;i<9;i++)
{
if (a[i]==1&&b[i]==0)
c[i]=1;
else c[i]=0;
}
for(i=0;i<9;i++)
{
printf("%d",c[i]);
}
}




