#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void insertionSortAsc(int *arr,int n)
{
 int temp,i,j;
 
 for(i=1;i<=n-1;i++)
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

void insertionSortDesc(int *arr,int n)
{
 int temp,i,j;
 
 for(i=1;i<=n-1;i++)
 {
  temp = arr[i];
  
  for(j=i-1;j>=0;j--)
  {
   if(arr[j] < temp)
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

void timeComplexity(int *arr,int n)
{
 clock_t start,end;
 
 double total_cputime;
 
 start = clock();
 
 insertionSortAsc(arr,n);
 
 end = clock();
 
 /*total_cputime = (double)(end-start);
 
 printf("\nTotal CPU Time : %lf\n",total_cputime);*/
 
 total_cputime = (double)(end-start)/(CLOCKS_PER_SEC);
 
 printf("%lf",total_cputime);
 
}


/*void timeComplexityDesc(int *arr,int n)
{
 clock_t start,end;
 
 double total_cputime;
 
 start = clock();
 
 insertionSortDesc(arr,n);
 
 end = clock();
 
 total_cputime = (double)(end-start);
 
 printf("\nTotal CPU Time : %lf\n",total_cputime);
 
 total_cputime = (double)(end-start)/(CLOCKS_PER_SEC);
 
 printf("\nTotal CPU Time in sec : %lf\n",total_cputime);
 
}
*/

int main()
{
 int matrix[1000000];
 
 
 printf("\nTIME COMPLEXITY FOR SORTING THE DATA IN ASCENDING FOR ALL CASES\n");
   		
 printf("\nVALUE OF N\tAVERAGE CASE \tBEST CASE\tWORST CASE\n");
   		
 for(int i=5000;i<=50000;i+=5000)
 {
  for(int j=0;j<i;j++)
  {
   matrix[j] = rand()%i;
  }
   		 
  printf("%d\t\t",i);
   		 
  timeComplexity(matrix,i);
   		 
  printf("\t");
   		 
  timeComplexity(matrix,i);
   		 
  printf("\t");
   		 
  insertionSortDesc(matrix,i);
   		 
  timeComplexity(matrix,i);
   		 
  printf("\n");
  
  
 }
 
 return 0;
}
