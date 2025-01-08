//write a program that takes an integer as the number of minutes, and outputs the total hours and minutes
#include <stdio.h>
float hour;
int minute;

int main() {
        printf("minutes: ");
        scanf("%d", &minute);

        int Lminute = minute % 60;
        hour = minute / 60;

        printf("%.0f hours %d minutes\n", hour, Lminute);
        return 0;
}
