#include<stdio.h>

void bubble_sort(int A[], int n)
{

  int round,i,temp;
   for(round=0;round<=n-1;round++)
      for(i=0;i<=n-1-round;i++)
         if(A[i]>A[i+1])
           {
             temp=A[i];
             A[i]=A[i+1];
             A[i+1]=temp;
            }
}
int main()
{
  int A[]={12.45.78.23.56.89.13.46.79}
  int i
  bubble_sort(A,9)
 
   
 for(i=0;i<8;i++)
     printf("%d\n",A[i]);
  return 0;
}
