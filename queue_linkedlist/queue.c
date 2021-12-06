#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL, *rear = NULL;

void enqueue()
{
    struct node *newNode = malloc(sizeof(struct node));
    int val;
    
    printf("Enter the value \n");  
    scanf("%d",&val); 

    newNode->data = val;
    newNode->next = NULL;

    //if it is the first node
    if(front == NULL && rear == NULL)
        //make both front and rear points to the new node
        front = rear = newNode;
    else
    {
        //add newnode in rear->next
        rear->next = newNode;

        //make the new node as the rear node
        rear = newNode;
    }
}

void dequeue()
{
    struct node *temp;
    int value;

    if(front == NULL)
         printf("Queue is Empty\n");
    else
    {
        temp = front;
        value = front->data;

        //make the front node points to the next node
        front = front->next;

        //if front == NULL, set rear = NULL
        if(front == NULL){
            rear = NULL;
        }
       //free the first node
       free(temp);
    }

}

void display()
{
    struct node *temp = front;

    if(temp == NULL){
        printf("Queue is Empty\n1");
    }
    else
    {
        while(temp)
        {
        printf("%d->",temp->data);
        temp = temp->next;
        }
    } 
}

int main()
{
   int ch,choice;     
    printf("\n*********Queue operations using linked list*********\n");    
    do  
    {  
        printf("\n\nChose one from the below options...\n");  
        printf("\n1.Enqueue\n2.Dequeue\n3.Display");  
        printf("\n Enter your choice \n");        
        scanf("%d",&ch);  
        switch(ch)  
        {  
            case 1:  
            {   
                enqueue();  
                break;  
            }  
            case 2:  
            {  
                dequeue();  
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
printf("\nDo you want to continue(1/0) \n");
scanf("%d",&choice);
}while(choice==1);
}