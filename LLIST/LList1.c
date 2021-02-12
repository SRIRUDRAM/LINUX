#include<stdio.h>
#include<stdlib.h>
typedef struct node
        {
         int data;
         struct node *next;
         }node;

//struct node *head=(node*)malloc(sizeof(node));
      //head=(node*)malloc(sizeof(node));

/*----------------------------------------------------------------------------------------------------------------------------------------------*/
void Create_List(node *first ,int val)
      {
      //node *temp;
      node *temp=(node*)malloc(sizeof(node));
      temp->data=val;
      if(first==NULL||first->data==0)
        {
         first->data=val;
        }
       else
          {
      while(first->next!=NULL)
          {
           first=first->next;
          }
           first->next=temp;
           temp->next=NULL;
          }
          }
/*----------------------------------------------------------------------------------------------------------------------------------------------*/
void LLMerge(node *L1,node *L2)
       {
        while(L1->next!=NULL)
          {
           L1=L1->next;
          }
           L1->next=L2;
       }
/*-----------------------------------------------------------------------------------------------------------------------------------------------*/
void Short_List(node *first)
       {
       int a;
        node *temp1=NULL;
        node *temp2=NULL;
        for(temp1=first;temp1!=NULL;temp1=temp1->next)
          {
          for(temp2=temp1->next;temp2!=NULL;temp2=temp2->next)
            {
             if(temp2->data<temp1->data)
               {
                a=temp1->data;
                temp1->data=temp2->data;
                temp2->data=a;
               }  
             }
          } 
        }
/*----------------------------------------------------------------------------------------------------------------------------------------------*/
void Print_List(node *first)
       {
        while(first!=NULL)
          {
           
           printf("[%u]-->[(%d)(%u)]\n",first,first->data,first->next);
           first=first->next;
          }
       }
/*----------------------------------------------------------------------------------------------------------------------------------------------*/
void Del_Dup(node *first)
        {
         node *ptr1, *ptr2, *dup;
         ptr1 = first;
 
        /* Pick elements one by one */
     while (ptr1 != NULL && ptr1->next != NULL)
        {
         ptr2 = ptr1;
 
        /* Compare the picked element with rest of the elements */
     while (ptr2->next != NULL)
        {
            /* If duplicate then delete it */
        if (ptr1->data == ptr2->next->data)
            {
                /* sequence of steps is important here */
                dup = ptr2->next;
                ptr2->next = ptr2->next->next;
                free(dup);
            }
            else
             
             {/* This is tricky */
                ptr2 = ptr2->next;
             }
        }
        ptr1 = ptr1->next;
    }
   }
       
/*----------------------------------------------------------------------------------------------------------------------------------------------*/int main()
    {
     int val=0;
     node *L1=(node*)malloc(sizeof(node));
     Print_List(L1);
     
     //CREATING LINKED LIST-1.    
     for(int i=0;i<6;i++)
       {
        printf("Enter an Eliment for a List1\n:");
        scanf("%d",&val);
        Create_List(L1,val);
       }
       Print_List(L1);
       printf("\n\n\n");
     
     //CREATING LINKED LIST-2. 
     node *L2=(node*)malloc(sizeof(node));
     Print_List(L2);  
     for(int i=0;i<6;i++)
       {
        printf("Enter an Eliment for a List2\n:");
        scanf("%d",&val);
        Create_List(L2,val);
       }
       Print_List(L2);
       printf("\n\n\n::LIST AFTER MERGING::\n");
      //MERGING TWO LINKED LISTS.
       LLMerge(L1,L2);
       Print_List(L1);
       printf("\n\n\n::LIST AFTER MERGING::\n");
      //AFTER SHORTING THE LIST
       Short_List(L1);
       Print_List(L1);
       printf("\n\n\n::LIST AFTER MERGING::\n");
       Del_Dup(L1);
       Print_List(L1);
     
    }    
    
    
    
    
    
    
    
    
    
    
