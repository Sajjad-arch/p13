/*Write a program in C to find the letter grade of student given the obtained marks in mid as M, final as
F, quiz as Q, presentation as P, and assignment as A.*/

#include <stdio.h>

int main (void)


{
    int  M,F,Q,A,TOTAL;


    PRINTF("ENTER THE VALUE OF M,F,Q,A: ");
    scanf("%d %d %d %d", &M, &F, &Q, &A);

    TOTAL=M+F+Q+A;

    if (TOTAL>=80 && TOTAL<=100)
        printf("A+");
    else if (TOTAL>=70 && TOTAL<=79)
        printf("A");
    else if (TOTAL>=60 && TOTAL<=69)
        printf("A-");
    else if (TOTAL>=50 && TOTAL<=59)
        printf("B");
    else if (TOTAL>=40 && TOTAL<=49)
        printf("c");
    else if (TOTAL>=30 && TOTAL<=39)
        printf("A+");
    else
        printf("FAIL");











    return 0;
}
