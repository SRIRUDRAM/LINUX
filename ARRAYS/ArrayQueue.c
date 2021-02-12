#include<stdio.h>
#include<stdio.h>
#define MAX 2
int front=-1;
int rear=-1;
int e;
int A[MAX];

int options;
int i;
void EnQueue()
   {
   printf("PLEASE ENTER AN ELEMENT INTO QUEUE\n");
   scanf("%d",&e);
   if(rear==(sizeof(A)/4)-1)
    {
     printf("THE QUEUE IS FULL");
    }
   else if(front==-1&&rear==-1)
    {
     front=rear=0;
     A[rear]=e; 
    }
    else
    { 
     rear=rear+1;
     A[rear]=e;
    }
   }
void PrintQueue()
   {
   if(front==-1&&rear==-1)
     {
       printf("THER IS NO QUEUE\n");
     }
   else
     {
       for(int i=front;i<=rear;i++)
      {
         printf("\t%d\n",A[i]);
      }
     }
   }

void DeQueue()
   {
    if(front==-1)
      {
       printf("THERE IS NO QUEUE\n");
      }
      else if(rear==front)
       {
        rear=front=-1;
       }
       else
        {
        printf("AN ELIMENT EXIT FROM THE QUEUE");
        front=front+1;
        }
     }   
void IsEmpty()
   {
    if(front==-1&&rear==-1)
      {
       printf("THERE IS NO QUEUE\n");
      }
      else
      {
      printf("THERE IS A QUEUE");
      }
   }
int FRONT()
   {
   }
int REAR()
   {
   if(rear==-1)
      {
       printf("THERE IS NO QUEUE");
      }
      else
    printf("THE ELEMENT RECENTLY ENTERED INTO QUEUE:: %d",A[rear]);
   }
int main()
 {
 printf("%d",sizeof(A));
 printf("%d",sizeof(e));
  do{
    printf("\n\t::PLEASE SELECT AN OPERATION TO OPERATE QUEUE::");
    printf("\n\t1.EnQueue\n\t2.DeQueue\n\t3.IsEmpty\n\t4.RECENT ENTERED INTO QUEUE\n\t5.READY TO EXIT FROM QUEUE\n\t6.PRINT THE QUEUE\n");
    scanf("%d",&options);
    switch(options)
      {
       case 1:
              EnQueue();
              break;
       case 2:
              DeQueue();
              break;
       case 3:
              IsEmpty();
              break;
       case 4:
              REAR();
              break;
       case 5:
              FRONT();
              break;
       case 6:
              PrintQueue();
              break;
       default:
               printf("PLEASE SELECT A OPERATION FROM ABOVE LIST ONLY\n\n");
               break;
       }
       printf("\tIF YOU WANT TO GOTO MAIN MENU PLEASE ENTER '2'");
       scanf("%d",&i);
    }while(i==2);
  }           
