#include<stdio.h>
#define MAX 101
int top=-1;
int e;
int A[MAX];

int options;
int i;
void PUSH()
   {
   printf("PLEASE ENTER AN ELEMENT TO PUSH INTO STACK\n");
   scanf("%d",&e);
   top=top+1;
   A[top]=e;
   }
void PrintStack()
   {
   if(top==-1)
     {
       printf("STACK IS EMPTY\n");
     }
   else
     {
       for(int i=top;i>=0;i--)
      {
         printf("\t%d\n",A[i]);
      }
     }
   }

void POP()
   {
    if(top==-1)
      {
       printf("STACK IS EMPTY WE CAN'T PERFORM POP OPERATION\n");
      }
      else
       {
        top--;
       }
    }   
void IsEmpty()
   {
    if(top==-1)
      {
       printf("STACK IS EMPTY\n");
      }
      else
      {
      PrintStack();
      }
   }
int TOP()
   {
   if(top==-1)
      {
       printf("STACK IS EMPTY");
      }
      else
    printf("TOP OF STACK:: %d",A[top]);
   }
int main()
 {
  do{
    printf("\n\t::PLEASE SELECT AN OPERATION TO OPERATE STACK::");
    printf("\n\t1.PUSH\n\t2.POP\n\t3.IsEmpty\n\t4.TOP\n\t5.PrintStack\n");
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
              IsEmpty();
              break;
       case 4:
              TOP();
              break;
       case 5:
              PrintStack();
              break;
       default:
               printf("PLEASE SELECT A OPERATION FROM ABOVE LIST ONLY\n\n");
               break;
       }
       printf("\tIF YOU WANT TO GOTO MAIN MENU PLEASE ENTER '99'");
       scanf("%d",&i);
    }while(i==99);
  }           
