#include <stdio.h>

#define MAXSIZE 5
int STACK[MAXSIZE],TOP=-1;

void push()
{
if(TOP==MAXSIZE-1)
{
printf("STACK OVERFLOW");
return;
}
else{
int var;
printf("Enter the value \n");
scanf("%d",&var);
TOP+=1;
STACK[TOP]=var;
return;
}
}

void pop()
{
if(TOP==-1)
{
printf("STACK UNDERFLOW");
return;
}
else{
int data;
data=STACK[TOP];
TOP-=1;
printf("The popped element is %d ",data);
return;
}
}

void display()
{
for(int i=0;i<=TOP;i++)
{
printf("%d ",STACK[i]);
}
return;
}

void main()
{
int ch;
char choice;
do{
printf("Enter 1 for push,2 for pop and 3 to display \n");
scanf("%d",&ch);
switch(ch)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
display();
break;
default:
printf(" unknown choice ");
break;
}
printf("\nEnter y to continue ");
scanf("%s",&choice);
}while(choice =='Y'||choice=='y');
}



