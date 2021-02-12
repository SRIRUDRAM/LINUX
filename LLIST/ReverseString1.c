#include<stdio.h>
#include<string.h>
int main()
  {
   char r[]="SHIVANGI";
    int i,j;
  printf("GIVEN STRING IS : %s\n",r);
  for(i=0,j=strlen(r)-1;i<j;i++,j--)
   {
    int temp=r[i];
        r[i]=r[j];
        r[j]=temp;
   }
  printf("AFTER REVERSE STRING IS : %s\n",r);
 }
