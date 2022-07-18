#include<stdio.h>
#include<stdlib.h>

void nonzero(int **arr,int n)
{
 int count = 0;
 
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<n;j++)
  {
   if(arr[i][j] != 0)
   	count++;
  }
 }
 
 printf("\nThe total number of nonzero elements are : %d\n",count);
}

void leadDiagonalSum(int **arr,int n)
{
 int i,j;
 
 int sum = 0;
 
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   if(i<j)
   	sum +=arr[i][j];
  }
 }
 
 printf("\nThe sum above Leading Diagonal is : %d\n",sum);
}

void MinorDiagonal(int **arr,int n)
{
  int i,j;
  
  printf("\nThe elements below minor diagonals : ");
  
  for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
   {
    if(n-i-1 < j)
    {
     printf("%d ",arr[i][j]);
    }
   }
  }   
}    

void productDiagonal(int **arr,int n)
{
 int i,j;
 
 long int prod = 1;
 
 for(i=0;i<n;i++)
 {
  prod *=arr[i][i]*arr[i][n-i-1];
 }
 
 printf("\nThe Product of the Diagonal Elements is : %ld\n",prod);
}

int main()
{
 int **arr;
 int n;
 
 printf("\nEnter the size of the matrix : ");
 scanf("%d",&n);
 
 arr =(int **)malloc(sizeof(int)*n);
 
 if(!arr)
 {
  exit(1);
 }
 
 for(int i=0;i<n;i++)
 {
  arr[i] = (int *)malloc(sizeof(int)*n);
 }
 
 if(!arr)
 	exit(1);
 
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<n;j++)
  {
   printf("\nEnter the element %d,%d : ",i,j);
   scanf("%d",&arr[i][j]);
  }
 }
 
 
 printf("\nThe Matrix is : \n");
 
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<n;j++)
  {
   printf("%d ",arr[i][j]);
  }
  
  printf("\n");
 }
 
 nonzero(arr,n);
 leadDiagonalSum(arr,n);
 MinorDiagonal(arr,n);
 productDiagonal(arr,n);
 
 return 0;	
}  
