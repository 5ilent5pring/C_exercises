/*
write a program to convert English units to metric. include a pecification and a code design
*/
#include <stdio.h>
#include <string.h>
float miles;
float galons;
char choice[10];
int main() {
    printf("Which operation? miles-kilometers or galons to liters? (miles/galons): ");
    scanf("%s", choice);
    if (strcmp(choice, "miles") == 0) {
        printf("Enter miles: ");
        scanf("%f", &miles);
        printf("%.1f kilometers\n", (miles * 1.609344));
    } else if (strcmp(choice, "galons") == 0) {
        printf("Enter galons: ");
        scanf("%f", &galons);
        printf("%.1f liters\n", (galons * 3.78541178));
    } else {
        printf("Not defined...\n");
    }
    return 0;
}
