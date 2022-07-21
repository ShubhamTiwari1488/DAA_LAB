//GCD 

#include<stdio.h>

int GCD(int a,int b)
{
 if(a%b == 0)
 	return b;
 	
 else
 {
  return GCD(b,a%b);
 }
}

int main()
{ 
 int a,b,gcd;
 
 printf("\nEnter two numbers : ");
 scanf("%d %d",&a,&b);
 
 gcd = (a>b)?GCD(a,b):GCD(b,a);
 
 printf("\nThe GCD of the numbers are : %d\n",gcd);
 
 return 0;
} 
