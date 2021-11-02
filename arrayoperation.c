#include<stdio.h>
void main()
{
char choice;
int arr[10],ch,size,var;
int *ptr=arr;    //*ptr=arr[0]
printf("Enter the size of the array(Max 10) ");
scanf("%d",&size);
printf("Enter the Array Elements ");
for(int i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
printf("Array elements are ");
for(int i=0;i<size;i++)
{
printf("%d \n",*ptr);
*ptr++;
}

void insertion()
{
int pos,ele;

printf("\n Enter the position you want to enter :") ;
scanf("%d", &pos) ;
printf("\n Enter the element you want to enter :") ;
scanf("%d", &ele) ;
size++;
//shift by 1 position 
for (int i = size-1; i >= pos; i--)
arr[i] = arr[i - 1]; 
// insert x at pos
arr[pos - 1] = ele; 
// print the updated array
for (int i = 0; i < size; i++)
printf("%d \n", arr[i]);
}


void deletion()
{
int ele,flag=0;
printf(" Enter the element to be deleted ");
scanf("%d",&ele);
for(int i=0;i<size;i++)
{
if(ele==arr[i])
{
flag+=1;
for(int j=i;j<size;j++)
arr[j]=arr[j+1];
}
}
printf(" Array after deletion \n");
size=size-flag;
for(int i=0;i<size;i++)
{
printf("%d \n",arr[i]);
}
}


int search(int x)
{
int flag=0;

for(int i=0;i<size;i++)
{
if(arr[i]==x)
{
flag=1;
return i;
}
}

if(flag==0)
{
return -1;
}
}

do{
printf(" ---------Array Operation----------------\n");
printf(" Enter 1 for insertion\n 2 for deletion \n 3 to Search for an element in the array \n");
scanf("%d",&ch);
switch(ch)
{
case 1:insertion();
break;
case 2:deletion();
break;
case 3:
printf("\n Enter the element to be searched ");
scanf("%d",&var);
printf(" The element is found at arrayindex %d \n",search(var));
break;
default:printf("Unknown Entry ");
}
printf(" Do you want to continue(y/n) ");
scanf("%s",&choice);
}while(choice=='Y'||choice=='y');
}
