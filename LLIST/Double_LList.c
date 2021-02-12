#include<stdio.h>
#include<stdlib.h>
typedef struct node
 {
  int data;
  struct node *rLink;
  struct node *lLink;
  }node; 
//CREATE DOUBLY LINKED LIST
void Create_List(node *first,int val)
      {
       node *temp=(node*)malloc(sizeof(node));
       //temp->rLink=NULL;
       temp->data=val;
       //temp->lLink=NULL;
       if(first==NULL||first->data==0)
         {
          first->lLink=first;
          first->data=val;
          first->rLink=NULL;
          }
         else
          {
           while(first->rLink!=NULL)
              
              {
               
               first=first->rLink;
               
               
              }
              temp->lLink=first;
              temp->rLink=NULL;
              first->rLink=temp;
              //temp->lLink=NULL;
              }
        }
//DISPLAY THE DOUBLY LINKED LIST IN FORWORD DIRECTION
 void Print_List(node *first)
         {
          while(first!=NULL)
           {
            printf("[(%d)][%d][(%d)]\n",first->lLink,first->data,first->rLink);
            first=first->rLink;
            }
         }
  
  int main()
   {
   int val;
   node *head=(node*)malloc(sizeof(node));
   Print_List(head);
   for(int i=0;i<6;i++)
   {
    printf("PLEASE ENTER A VALUE FOR LIST::");
    scanf("%d",&val);
    Create_List(head,val);
    }
   printf("\n\n");
   Print_List(head);
  
   
   }
   
   
   
   
   
   
   
   
