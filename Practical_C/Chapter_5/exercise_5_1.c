//write a program that converts Centigrade to Fahrenheit
#include <stdio.h>

float celcius;

int main() {
        printf("Enter celcius: ");
        scanf("%f", &celcius);
        float fahrenheit = (9 * celcius) / 5 + 32;
        printf("Fahrenheit is :%f\n", fahrenheit);
        return 0;
}
