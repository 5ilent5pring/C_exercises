/*
a leap year is any year divisible by 4, unless the year is divisible by 100, but not 400, write a program to tell if a year is a leap year
*/

#include <stdio.h>

int year;
int main() {
    printf("Enter year number: ");
    scanf("%d", &year);

    if (year % 4 != 0) {
        printf("%d is not a leap year..\n", year);
    } else if (year % 100 == 0 && year % 400 == 0) {
        printf("%d is a leap year!\n", year);
    } else if (year % 100 != 0 && year % 400 != 0) {
        printf("%d is a leap year!\n", year);
    } else {
        printf("%d is not a leap year..\n", year);
    }
    return 0;
}
