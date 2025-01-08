//write a program that takes hours and minutes as input, and then outputs the total number of minutes
#include <stdio.h>

int hour;
int minute;

int main() {
        printf("hour: ");
        scanf("%d", &hour);
        printf("minute: ");
        scanf("%d", &minute);
        int total_minute = (hour * 60) + minute;
        printf("%d minute in total\n", total_minute);
        return 0;
}
