#include<stdio.h>
#define max 2
int A[2];
int main()
 {
 printf("%ld",sizeof(A));
 for(int i=0;i<=sizeof(A);i++)
   {
  scanf("%d",&A[i]);
   } 
 printf("arrai is");
 for(int i=0;i<=sizeof(A);i++)
   {
  printf("%d",A[i]);
   } 
 
   }
