#include<stdio.h>
#include<stdlib.h>

int largest(int *,int);
int smallest(int *,int);

int main()
{
 int n;
 int *arr;
 
 int large,small;
 
 printf("\nEnter the value of n : ");
 scanf("%d",&n);
 
 arr=(int *)malloc(sizeof(int)*n);
 
 if(!arr)
 {
  exit(1);
 }
  
 for(int i=0;i<n;i++)
 {
  printf("\nEnter element %d : ",i);
  scanf("%d",arr+i);
 }
 
 large = largest(arr,n);
 small = smallest(arr,n);
 
 printf("\nThe largest number is : %d and smallest number is : %d\n",large,small);
 
 return 0;
}

int largest(int *arr,int n)
{
 int max = arr[0];
 
 for(int i=1;i<n;i++)
 {
  if(max < arr[i])
  	max = arr[i];
  	
 }
 
 return max;
}


int smallest(int *arr,int n)
{
 int min = arr[0];
 
 for(int i=1;i<n;i++)
 {
  if(min > arr[i])
  	min = arr[i];
  	
 }
 
 return min;
}
 
