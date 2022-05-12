#include<stdio.h>
int main()
{
     float T1 ,T2, eff ;

     T1 = 373; // Celsius to Kelvin for steam point 100 degree = 100C + 273 = 373K
     T2 = 273; // Celsius to Kelvin for ice point 0degree = 0C + 273 = 273K
     eff = (1 - (T2 / T1)) * 100;
     printf("Efficiency of the Carnot's engine is %.2f\n", eff);


     return 0 ;
}
