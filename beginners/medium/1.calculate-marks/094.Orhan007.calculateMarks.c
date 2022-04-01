#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("Enter the roll number of the student: ");
    scanf("%f",&a);
    char n[100];
    printf("Enter the name of the student: ");
    scanf("%s",n);
    printf("Marks in phusics: ");
    scanf("%f",&b);
    printf("Marks in chemistry: ");
    scanf("%f",&c);
    printf("Computer application: ");
    scanf("%f",&d);
    float tot,per,divi;
    tot=b+c+d;
    printf("Total marks= %.2f\n",tot);
    per=tot/3;
    printf("Percentage= %.2f\n",per);
    if(per>=60)
    {
        printf("Division=First");
    }
    else if(48<=per&&per<60)
    {
        printf("Division=Second");
    }
    else if(per<48)
    {
        printf("Division=Third");
    }

}
