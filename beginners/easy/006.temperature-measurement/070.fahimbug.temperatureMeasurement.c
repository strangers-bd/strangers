#include<stdio.h>
int main()
{

    float temp;
    scanf("%f", &temp);
    if(temp < 0){
    printf("Freezing weather");
    }

    else if( temp < 10)
        {printf("Very Cold weather");
        }

    else if( temp < 20)
   {

    printf("Cold weather");}

    else if (temp <30)
       {

       printf("Normal");
       }
    else if (" temp < 40")
       {

        printf("Its Hot");
       }
    else
       {

        printf("Its very Hot");
       }
    return 0;
}
