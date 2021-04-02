#include<stdio.h>
int main (){

     int num   [5] ;
     int sum=0,i;

     printf("Enter a Five Number");
    for(i=0; i<5; i++)

    {
        scanf("%d",&num[i]);
    }

     for(i=0; i<5; i++)
     {
         sum = sum +num[i];
     }

         printf("\n The Sum is %d",sum);
         printf("The Average is : %d", sum/5);

     return 0;
}
