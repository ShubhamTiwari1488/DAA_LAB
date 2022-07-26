//GCD USING FOR LOOP

#include <stdio.h>

int count = 0;

int main() {

    int a, b, gcd = 0; 
    count++;
    
    printf("Enter two numbers \n");
    count++;
    
    scanf("%d %d",&a,&b);
    count++;
    
    for(int i=1; i<=a && i<=b; i++){
        if(a%i==0 && b%i==0){
            gcd = i;
            count++;
       }
       
       count++;
    }
    
    printf("GCD: %d\n", gcd);
    count++;
    
    printf("COUNT is : %d\n",count);
    
    return 0;
}
