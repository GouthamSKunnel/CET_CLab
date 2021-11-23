#include <stdio.h>

#define MAX 5
int queue[MAX],front=-1,rear=-1;

void enqueue()
{
if(rear==MAX-1)
{
printf("QUEUE OVERFLOW");
return;
}
else{
int var;
printf("Enter the value \n");
scanf("%d",&var);
rear+=1;
queue[rear]=var;
if(front==-1)
{
front=front+1;
}
return;
}
}

void dequeue()
{
if((front==-1)||(front>rear))
{
printf("QUEUE UNDERFLOW");
return;
}
else{
int data;
data=queue[front];
front+=1;
printf("The deleted element is %d ",data);
return;
}
}

void display()
{
if((front==-1)||(front>rear))
{
printf("QUEUE UNDERFLOW");
return;
}
else{
for(int i=front;i<=rear;i++)
{
printf("%d ",queue[i]);
}
}
return;
}

void main()
{
int ch;
char choice;
do{
printf("Enter 1 for Enqueue,2 for Dequeue and 3 to display \n");
scanf("%d",&ch);
switch(ch)
{
case 1:
enqueue();
break;
case 2:
dequeue();
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

