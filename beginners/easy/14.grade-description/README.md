# Title

Write a C program which Accept a grade and display equivalent description.

## Description

This program can accept a char (A/V/G/A/F) and return a description calculating the input value

- Input

  - Input type must be char.

- Output

  - If the input value is A then print Excellent
  - If the input value is V then print Very Good
  - If the input value is G then print Good
  - If the input value is A then print Average
  - If the input value is F then print Fail

- Test Cases

| Input               | Output    |
| ------------------- | --------- |
| Input the grade : A | Excellent |
| Input the grade : V | Very Good |
| Input the grade : G | Good      |
| Input the grade : A | Average   |
| Input the grade : F | Fail      |

<!--
// Solution

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void main()
{
    char notes[15];
    char grd;

    printf("Input the grade :");
    scanf("%c", &grd);

    grd = toupper(grd);
    switch(grd)
    {
    case 'E':
        strcpy(notes, " Excellent");
        break;
    case 'V':
        strcpy(notes, " Very Good");
        break;
    case 'G':
        strcpy(notes, " Good ");
        break;
    case 'A':
        strcpy(notes, " Average");
        break;
    case 'F':
        strcpy(notes, " Fails");
        break;
    default :
        strcpy(notes, "Invalid Grade Found. \n");
        break;
    }
    printf("You have chosen  : %s\n", notes);
}  -->
