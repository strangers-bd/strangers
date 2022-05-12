#include<stdio.h>
int main()
{
     int salary,monthly_salary  ;
     scanf("%d", &salary);
     monthly_salary = salary / 12 ;
     if(monthly_salary > 4500){
            printf("Your monthly salary is = %d\n" ,monthly_salary);
             printf("You are Rich\n");
     }
     else{
        printf("Your monthly salary is = %d\n" ,monthly_salary);
             printf("You are poor\n");
     }
     return 0 ;
}
