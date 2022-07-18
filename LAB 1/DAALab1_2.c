#include<stdio.h>
#include<stdlib.h>

int largest(int *,int);
void duplicate(int *,int);

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
 
 duplicate(arr,n);
 
 return 0;
}

void duplicate(int *arr,int n)
{
 int size,max_dup,count=0,max_dup_val;
 int *temp;
 
 size = largest(arr,n);
 
 temp = (int *)calloc(size+1,sizeof(int));
 
 for(int i=0;i<n;i++)
 {
  temp[arr[i]]++;
 }
 
 max_dup = temp[0];
 
 for(int i=0;i<=size;i++)
 {
   if(max_dup < temp[i]){
   	max_dup = temp[i];
   	max_dup_val = i;
   }
   
   if(temp[i] > 1)
   	count++;
 }
 
 printf("\nThe total number of duplicates are : %d\n",count);
 printf("\nThe most repeative element is : %d\n",max_dup_val);
 
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
