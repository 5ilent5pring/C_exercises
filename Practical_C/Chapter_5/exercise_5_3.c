//write a program that prints the perimeter of a rectangle given its height and width
#include <stdio.h>

float height;
float width;
int main() {
        printf("height: ");
        scanf("%f", &height);
        printf("width: ");
        scanf("%f", &width);
        printf("perimeter is %.2f\n", (height + width) * 2);
}
