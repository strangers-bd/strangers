#include<stdio.h>
int main()
{
    float a;

    scanf("%f", &a);
    if(a > 0){
        printf("This is a positive number");
    }
    else if(a < 0)
    {
        printf("This is a negative number");

    }
    else{
        printf("This is zero");
    }
    return 0 ;
}
