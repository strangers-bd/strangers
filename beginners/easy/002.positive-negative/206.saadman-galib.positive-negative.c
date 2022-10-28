#include<stdio.h>

int main(){
    double num;

    printf("Enter your input: ");
    scanf("%lf", &num);

    if(num > 0){
        printf("This is a positive number");
    }
    else if (num < 0){
        printf("This is a negative number");

    }
    else{
        printf("This is zero");
    }
    printf("\n");
    
    return 0;
}