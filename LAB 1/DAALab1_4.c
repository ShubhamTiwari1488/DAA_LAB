#include<stdio.h>
#include<stdlib.h>

void swap(int *a,int *b)
{
 int temp = *a;
 
 *a = *b;
 
 *b = temp;
}
 
int main()
{
 int a,b,c;
 
 printf("\nEnter the three numbers : \n");
 scanf("%d %d %d",&a,&b,&c);
 
 swap(&a,&b);
 swap(&a,&c);
 
 printf("\nThe numbers are : %d , %d , %d\n",a,b,c);
 
 return 0;
} 
