/* 
given a numeric grade, print the letter
*/

#include <stdio.h>

int grade;

int main() {
    printf("Enter exam grade (out of 100): ");
    scanf("%d", &grade);

    if (grade <= 60) {
        printf("F\n");
    } else if (grade <=70) {
        if (grade < 64) {
            printf("D-\n");
        } else if (grade < 68) {
            printf("D\n");
        } else {
            printf("D+\n");
        }
    } else if (grade <=80) {
        if (grade < 74) {
            printf("C-\n");
        } else if (grade < 78) {
            printf("C\n");
        } else {
            printf("C+\n");
        }
    } else if (grade <= 90) {
        if (grade < 84) {
            printf("B-\n");
        } else if (grade < 88) {
            printf("B\n");
        } else {
            printf("B+\n");
        }
    } else {
        if (grade < 94) {
            printf("A-\n");
        } else if (grade < 98) {
            printf("A\n");
        } else {
            printf("A+\n");
        }
    }
    return 0;
}
