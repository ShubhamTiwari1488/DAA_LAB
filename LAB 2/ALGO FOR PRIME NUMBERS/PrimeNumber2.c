//Prime Number

#include<stdio.h>

int count = 0;

int isPrime(int num)
{
 if(num == 1)
 	return 0;
 
 count++;
 
 for(int i=2;i<num/2;i++)
 {
  if(num % i == 0)
  	return 0;
  	
  count++;
   	
 }
 
 return 1;
}

int main()
{
 int num;
 
 count++;
 
 printf("\nEnter the num : ");
 scanf("%d",&num);
 
 count++;
 
 if(isPrime(num))
 {
  printf("\nThe number is a Prime\n");
 }
 
 else
 {
  printf("\nThe number is not a Prime\n");
 }
 
 count++;
 
 printf("\n\nThe Value of count is : %d\n",count);
 
 return 0;
}  
