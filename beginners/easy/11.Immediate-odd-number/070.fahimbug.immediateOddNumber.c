#include<stdio.h>
int main()
{

   int num ;
   scanf("%d", &num);
   if(num % 2 == 0){
     num = num +1;
     printf("Your immediate next odd number is = %d\n",num );

   }else{
    printf("invalid output\n");
   }

   return 0 ;
}
