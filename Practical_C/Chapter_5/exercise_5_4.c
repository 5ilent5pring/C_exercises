//write a program that converts kilometers per hour to miles per hour
#include <stdio.h>
float kilometer;

int main() {
        printf("Kilometer info: ");
        scanf("%f", &kilometer);
        float miles = kilometer * 0.6213712;
        printf("it is %f miles\n", miles);
}
