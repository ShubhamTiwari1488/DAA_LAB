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
 int *arr,n,ch,matrix[1000000];
 
 while(1) {
  printf("\n\n0.Quit\n1.n Random Numbers Array\n2.Display\n3.Sort the Array in Ascending Order\n4.Sort the Array in Descending Order\n5.Time Complexity to sort the data in Ascending Order\n6.Time Complexity to sort the already ascending data in ascending order\n7.Time Complexity to sort the already ascending data in descending order\n8.Time Complexity to sort the data in ascending order for all cases\n");
 
  printf("\nEnter your choice : ");
  scanf("%d",&ch);
  
  switch(ch)
  {
   case 0: exit(0);
   		break;
   		
   case 1: printf("\nEnter the number of elements : ");
           scanf("%d",&n);
 
 	     arr = (int *)malloc(sizeof(int)*n);
 
 	     for(int i=0;i<n;i++)
           {
  		arr[i] = rand()%n;
 	     }
 	     
 	     break;
 	     
   case 2:
   		printf("\nDisplaying the array : ");
   		
   		for(int i=0;i<n;i++)
   		{
 		 printf("%d ",arr[i]);
 		}
 		
 		printf("\n");
 		break;
 	     
   case 3:
   		insertionSortAsc(arr,n);
   		break;
   		
   case 4:
   		insertionSortDesc(arr,n);
   		break;
   		
   case 5:
   		printf("\nTotal CPU Time in sec is :");
   		timeComplexity(arr,n);
   		printf("\n");
   		break;
   		
   case 6:
   		insertionSortAsc(arr,n);
   		printf("\nTotal CPU Time in sec is :");
   		timeComplexity(arr,n);
   		printf("\n");
   		break;
   		
   case 7:
   		insertionSortDesc(arr,n);
   		printf("\nTotal CPU Time in sec is :");
   		timeComplexity(arr,n);
   		printf("\n");
   		break;
   
   case 8:
   		printf("\nTIME COMPLEXITY FOR SORTING THE DATA IN ASCENDING FOR ALL CASES\n");
   		
   		printf("\nVALUE OF N\tDATA IN RANDOM\tDATA IN ASC\tDATA IN DESC\n");
   		
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
   		
   		 break;
  }
 }
 
 return 0;
}
