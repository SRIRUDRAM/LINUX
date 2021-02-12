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
    Node *head=NULL;

 int PUSH()
   {
    Node *temp=(Node*)malloc(sizeof(Node));
    printf("ENTER A VALUE FOR PUSHING DATA INTO STACK::");
    scanf("%d",&x);
    temp->data=x;
    if(head==NULL)
     { 
      temp->next=NULL;
      head=temp;
      }
      else
      {
      temp->next=head;
      head=temp;
      }
    }
    
void PrintStack(Node *first)
    {
    if(first==NULL)
     {
     printf("stack is empty\n");
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
 
 
 void POP()
  {
   if(head==NULL)
   {
    printf("stack is empty\n");
   }
   else
   {
    Node *temp=head;
    head=temp->next;
    printf("NOW YOU ARE POP AN ELIMENT FROM THE STACK");
    free(temp); 
   }
  }
 void  TOP()
  {
  if(head==NULL)
   {
    printf("stack is empty\n");
   }
   else
   {
    printf("THE TOP OF THE STACK IS:: %d",head->data);
   }
  } 
 void IsEmpty()
  {
   if(head==NULL)
   {
    printf("stack is empty\n");
   }
   else
   {
    PrintStack(head);
   }
  }
 int main()
 { 
 
 do
 {
   printf("\n\tPLEASE SELECT AN OPTION BELLOW TO OPERATE STACK\n");
   printf("\t1.PUSH\n\t2.POP\n\t3.TOP\n\t4.IS EMPTY\n\t5.PRINT LIST\n");
   scanf("%d",&options);
   switch(options)
      {
       case 1:
              PUSH();
              break;
       case 2:
              POP();
              break;
       case 3:
              TOP();
              break;
       case 4:
              IsEmpty();
              break;
       case 5:
              PrintStack(head);
              break;
       default:
              printf("\n*****YOU ARE SELECTED A WRONG OPTION*****\n");
              break;
      }
      printf("\n\tIF YOU WANT TO GO TO MAIN MENU PLEASE TYPE '2'::");
      scanf("%d",&i);
     }
     while(i==2);
  
  }
  
  
