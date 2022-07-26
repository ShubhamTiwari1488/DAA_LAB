//GCD USING EUCLIER

#include<stdio.h>

int count = 0;

int GCD(int a,int b)
{
 if(a%b == 0)
 	return b;
 
 count++;
 
 else
 {
  return GCD(b,a%b);
 }
 
 count++;
 
}

int main()
{ 
 int a,b,gcd;
 
 count++;
 
 printf("\nEnter two numbers : ");
 scanf("%d %d",&a,&b);
 
 count++;
 
 gcd = (a>b)?GCD(a,b):GCD(b,a);
 
 count++;
 
 printf("\nThe GCD of the numbers are : %d\n",gcd);
 
 count++;
 
 printf("\nThe Value of count is : %d\n",count);
 
 return 0;
} 
