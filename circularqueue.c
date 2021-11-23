#include <stdio.h>

#define MAX 5
int cqueue[MAX],front=-1,rear=-1;

void display()
{
if(front==-1){
printf("QUEUE UNDERFLOW");
return;
}
if(front>rear){
for(int i=front;i<MAX;i++){
printf("%d ",cqueue[i]);
}
for(int i=0;i<=rear;i++)
{
printf("%d ",cqueue[i]);
}
}
else{
for(int i=front;i<=rear;i++)
{
printf("%d ",cqueue[i]);
}
}
return;
}

void enqueue()
{
if(front==(rear+1)%MAX){
printf("QUEUE OVERFLOW");
return;
}
else{
if(front==-1 && rear==-1){
rear=0;
front=0;
}
else if(rear==MAX-1 && front!=0){
rear=0;
}
else{
rear=(rear+1)%MAX;
}
int var;
printf("Enter the value \n");
scanf("%d",&var);
cqueue[rear]=var;
display();
return;
}
}


void dequeue()
{
if(front==-1)
{
printf("QUEUE UNDERFLOW");
return;
}
else{
int data;
data=cqueue[front];
if(front==rear)
{front=-1;
rear=-1;
}
else if(front==MAX-1){
front=0;
}
else{
front=(front+1)%MAX;
}
printf("The deleted element is %d \n",data);
display();
return;
}
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

