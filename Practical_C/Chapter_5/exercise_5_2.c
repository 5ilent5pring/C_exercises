//write a program to calculate the volume of a sphere

#include <stdio.h>

int main() {
        float radius;
        float pi = 3.14;
        printf("enter the sphere radius: ");
        scanf("%f", &radius);
        printf("sphere area is: %.2f\n", (4 * pi / 3) * radius * radius * radius);
        return 0;
}
