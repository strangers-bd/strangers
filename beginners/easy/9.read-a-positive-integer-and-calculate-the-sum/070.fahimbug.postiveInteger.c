#include<stdio.h>
int main()
{

   int i , n , sum = 0;
   scanf("%d", &n);

   while(i < n)
    {
        if(n>0){
            sum = sum + i ;
        }
    }
   printf("Total sum = %d\n", sum);
   return 0 ;
}
