#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void insertionSort(int *arr,int lb,int ub)
{
 int temp,i,j;
 
 for(i=lb+1;i<=ub;i++)
 {
  temp = arr[i];
  
  for(j=i-1;j>=0;j--)
  {
   if(arr[j] > temp)
   {
    arr[j+1] = arr[j];
   }
   
   else
   {
     break;
   }
   
  }
  
  arr[j+1] = temp;
 }
} 

int main()
{
 int *arr;
 int n;
 
 clock_t start,end;
 
 double total_cputime;
 
 printf("\nEnter the number of elements : ");
 scanf("%d",&n);
 
 arr = (int *)malloc(sizeof(int)*n);
 
 for(int i=0;i<n;i++)
 {
  arr[i] = rand()%5000;
 }
 
 start = clock();
 
 insertionSort(arr,0,n);
 
 end = clock();
 
 total_cputime = (double)(end-start);
 
 printf("\nSorted Array is : \n");
 
 for(int i=0;i<n;i++)
 {
  printf("%d ",arr[i]);
 }
 
 
 printf("\n\n");
 
 printf("\nTotal CPU time is : %lf\n",total_cputime);
 
 total_cputime = (double)(end-start)/(CLOCKS_PER_SEC);
 
 printf("\n\nTotal CPU time in sec is : %lf\n",total_cputime);
 
 return 0;
}

