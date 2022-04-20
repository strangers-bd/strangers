
#include<stdio.h>
int main()
{

    float a,b ;
    scanf("%f%f", &a , &b);
    if(a > b){
        printf("%.2f is the largest\n",a);
    }
    else if(a == b){
        printf("Both are equal\n");
    }
    else {
        printf("%.2f is the largest\n", b);
    }
    return 0 ;
}
