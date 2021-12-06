#include <stdio.h>
#include <stdlib.h> 

struct node   
{  
int val;  
struct node *next;  
};  

struct node *Top; 

    void push ()  
    {  
        int val;  
        struct node *ptr =(struct node*)malloc(sizeof(struct node));   
        if(ptr == NULL)  
        {  
            printf("not able to push the element");   
        }  
        else   
        {  
            printf("Enter the value \n");  
            scanf("%d",&val);  
            if(Top==NULL)  
            {         
                ptr->val = val;  
                ptr -> next = NULL;  
                Top=ptr;  
            }   
            else   
            {  
                ptr->val = val;  
                ptr->next = Top;  
                Top=ptr;  
                   
            }  
            printf("Item pushed \n");  
              
        }  
    }  
 
    void pop()  
    {  
        int item;  
        struct node *ptr;  
        if (Top == NULL)  
        {  
            printf("Underflow \n");  
        }  
        else  
        {  
            item = Top->val;  
            ptr = Top;  
            Top = Top->next;  
            free(ptr);  
            printf("Item popped \n");  
              
        }  
    } 


    void display()  
    {  
        int i;  
        struct node *ptr;  
        ptr=Top;  
        if(ptr == NULL)  
        {  
            printf("Stack is empty\n");  
        }  
        else  
        {  
            printf("Printing Stack elements \n");  
            while(ptr!=NULL)  
            {  
                printf("%d\n",ptr->val);  
                ptr = ptr->next;  
            }  
        }  
    }   
 
  
  
void main ()  
{  
    int ch,choice;     
    printf("\n*********Stack operations using linked list*********\n");    
    do  
    {  
        printf("\n\nChose one from the below options...\n");  
        printf("\n1.Push\n2.Pop\n3.Show");  
        printf("\n Enter your choice \n");        
        scanf("%d",&ch);  
        switch(ch)  
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
            default:  
            {  
                printf("Please Enter valid choice ");  
            }
       }   
printf("Do you want to continue(1/0) \n");
scanf("%d",&choice);
}while(choice==1);
}   
