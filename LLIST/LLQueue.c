#include<stdio.h>
#include<stdlib.h>

typedef struct node
   { 
    int data;
    struct node *next;
    }Node;
    
    int options;
    int i;    
    int x;
    Node *front=NULL;
    Node *rear=NULL;
    //Node *head=NULL;
 int ENQUEUE()
   {
    Node *temp=(Node*)malloc(sizeof(Node));
    printf("ENTER A VALUE FOR ENTERING DATA INTO QUEUE::");
    scanf("%d",&x);
    temp->data=x;
    if(rear==NULL)
     { 
      temp->next=NULL;
      front=rear=temp;
      }
      else
      {
      rear->next=temp;
      temp->next=NULL;
      rear=rear->next;
      }
    }
    
void PrintQueue(Node *first)
    {
    if(first==NULL)
     {
     printf("queue is empty\n");
     }
     else
     {
    while(first!=NULL)
     {
      printf("%d-->",first->data);
      first=first->next;
     }
     }
     printf("\n");  
 }
 
 
 void DEQUEUE()
  {
   if(front==NULL)
   {
    printf("queue is empty\n");
   }
   else
   {
    Node *temp=front;
    front=temp->next;
    printf("NOW AN ELIMENT EXIT FROM THE QUEUE");
    free(temp); 
   }
  }
 void  FRONT()
  {
  if(front==NULL)
   {
    printf("queue is empty\n");
   }
   else
   {
    printf("THE ELEMENT READY TO EXIT FROM QUEUE:: %d",front->data);
   }
  } 
  void REAR()
  {
  if(rear==NULL)
   {
    printf("queue is empty\n");
   }
   else
   {
    printf("RECENT ELEMENT ENTERED IN QUEUE:: %d",rear->data);
   }
  }
 void IsEmpty()
  {
   if(front==NULL)
   {
    printf("queue is empty\n");
   }
   else
   {
    printf("SOME ELEMENTS ARE IN QUEUE");
   }
  }
 int main()
 { 
 
 do
 {
   printf("\n\tPLEASE SELECT AN OPTION BELLOW TO OPERATE QUEUE\n");
   printf("\t1.ENQUEUE\n\t2.DEQUEUE\n\t3.FRONT\n\t4.REAR\n\t5.PRINT QUEUE\n\t6.IS EMPTY\n");
   scanf("%d",&options);
   switch(options)
      {
       case 1:
              ENQUEUE();
              break;
       case 2:
              DEQUEUE();
              break;
       case 3:
              FRONT();
              break;
       case 4:
              REAR();
              break;
       case 5:
              PrintQueue(front);
              break;
       case 6:
              IsEmpty();
              break;
       default:
              printf("\n*****YOU ARE SELECTED A WRONG OPTION*****\n");
              break;
      }
      printf("\n\tIF YOU WANT TO GO TO MAIN MENU PLEASE TYPE '2'::");
      scanf("%d",&i);
     }while(i==2);
  }
  
  
  
  
  
  
  
  
  
  
  
