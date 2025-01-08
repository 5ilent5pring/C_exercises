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
        printf("D\n");
    } else if (grade <=80) {
        printf("C\n");
    } else if (grade <= 90) {
        printf("B\n");
    } else {
        printf("A\n");
    }
    return 0;
}
