// Develop Calculator

#include<stdio.h>

int main()
{
	double num1, num2;
	
	scanf("%lf%lf", &num1, &num2);
	
	if(num1 > num2 || num2 > num1){
		printf("%.0lf\n", num1 + num2);
		printf("%.0lf\n", num1 - num2);
		printf("%.0lf\n", num1 * num2);
		printf("%.0lf\n", num1 / num2);
		//printf("%.0lf\n", num1 % num2);
	}
	
    return 0;
}
