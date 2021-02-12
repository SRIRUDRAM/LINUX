#include<stdio.h>
#include<stdlib.h>
typedef struct node
        {
         int data;
         struct node *next;
         }node;

//struct node *head=(node*)malloc(sizeof(node));
      //head=(node*)malloc(sizeof(node));

/*-----------------------------------------------------------------------------------------------------------------------------------------------*/
void LList1(node *first ,int val)
      {
      //node *temp;
      node *temp=(node*)malloc(sizeof(node));
      temp->data=val;
      if(first->data==NULL)
        {
         temp->next=NULL;
         first=temp;
        }
       else
          {
          while(first->next!=NULL)
               {
                first=first->next;
               }
                temp->next=NULL;
                first->next=temp;
          }
       }
/*-----------------------------------------------------------------------------------------------------------------------------------------------*/
void Print_List(node *first)
       {
        while(first!=NULL&&first->data!=-9999)
          {
           
           printf("[%u]-->(%d)-->[%u]\n",first,first->data,first->next);
           first=first->next;
          }
       }/*
 void Print_List(node *list)
 {
   while(list!=NULL&&list->data!=-99)
    {
      printf("%u-->[(%d)(%u)]\n",list,list->data,list->next);
      list=list->next;
    }
 }*/
/*-----------------------------------------------------------------------------------------------------------------------------------------------*/int main()
    {
     int val=0;
     node first=(node*)malloc(sizeof(node));
     for(int i=0;i<6;i++)
       {
        printf("Enter an Eliment for a List\n:");
        scanf("%d",&val);
        LList1(&first,val);
       }
     Print_List(&first);
    }    
