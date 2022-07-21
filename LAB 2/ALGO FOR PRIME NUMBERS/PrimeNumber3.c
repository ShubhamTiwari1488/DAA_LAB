//Prime Number

#include<stdio.h>
#include<math.h>

int count = 0;

int isPrime(int num)
{
 if(num == 1)
 	return 0;
 
 count++;
 
 for(int i=2;i<sqrt(num);i++)
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
 
 return 0;
}  
