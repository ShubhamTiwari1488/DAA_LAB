//Prime Factorial

#include<stdio.h>

int flag = 0;
int prod = 1;

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

void PrimeFactorial(int num)
{ 
 if(num == 1)
 	printf("1");
 	
 if(isPrime(num))
 	printf("1 %d",num);
 	
 for(int i=2;i<num;i++)
 {  
  if(num%i==0 && isPrime(i) && prod != num)
  {
   printf("%d ",i);
   prod *= i;
   flag = 1;
  }
  
  else if(num%i == 0 && !isPrime(i) && prod != num)
  {
   PrimeFactorial(i);
  }
 }
 
 if(prod != num)
 {
  PrimeFactorial(num);
 }
}

int main()
{
 int num;
 
 printf("\nEnter the num : ");
 scanf("%d",&num);
 
 printf("\nThe Prime Factorial of the number is : ");
 PrimeFactorial(num);
 printf("\n");
 
 return 0;
} 
