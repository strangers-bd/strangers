#include<stdio.h>


int main(){

    int total_marks ;
    float avg ;
    int roll , physics, chemistry , CSE ;
     char student_name[50] ;

    printf("Enter Roll No :\n");
    scanf("%d", &roll);

    printf("Name of student :\n");
    scanf("%s",student_name );
    printf("Marks in physics :\n");
    scanf("%d", &physics );

    printf("Marks in chemistry :\n");
    scanf("%d", &chemistry );

    printf("Marks in CSE :\n");
    scanf("%d", &CSE);

    total_marks = (physics + chemistry + CSE);
    printf("Total Marks : %d\n" , total_marks);

    avg = (total_marks)/3 ;
    printf("percentage = %.2f\n",avg) ;

    if(avg >= 60){
        printf("Devision = First\n");

    }
    else if(avg >= 48 && avg <60 ){
    printf("Devision = Second\n");
    }
    else
        printf("Devision = Third\n");

}

