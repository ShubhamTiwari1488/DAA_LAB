#include<stdio.h>
#include<stdlib.h>

void segregration(int *,int);
void swap(int *,int *);

int main()
{
 int n;
 int *arr;
 
 int large,small;
 
 arr=(int *)malloc(sizeof(int)*n);
 
 if(!arr)
 {
  exit(1);
 }
  
 printf("\nEnter the value of n : ");
 scanf("%d",&n);
 
 for(int i=0;i<n;i++)
 {
  printf("\nEnter element %d : ",i);
  scanf("%d",arr+i);
 }
 
 segregration(arr,n);
 
 printf("\nAfter segregration array is : ");
 
 for(int i=0;i<n;i++)
 	printf("%d ",arr[i]);
 
 return 0;
}

void segregration(int *arr,int n)
{
 int point=0;
 
 for(int i=0;i<n;i++)
 {
  if(arr[i]%2==0)
  	swap(&arr[i],&arr[point]);
  	
 }
}

void swap(int *a,int *b)
{
 int temp;
 
 temp=*a;
 
 *a = *b;
 
 *b = temp;
}
