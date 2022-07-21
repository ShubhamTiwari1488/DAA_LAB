//Prime Number

#include<stdio.h>

int isPrime(int num)
{
 if(num == 1)
 	return 0;
 	
 for(int i=2;i<=num/2;i++)
 {
  if(num % i == 0)
  	return 0;
  	
 }
 
 return 1;
}

int main()
{
 int num;
 
 printf("\nEnter the num : ");
 scanf("%d",&num);
 
 if(isPrime(num))
 {
  printf("\nThe number is a Prime\n");
 }
 
 else
 {
  printf("\nThe number is not a Prime\n");
 }
 
 return 0;
}  
