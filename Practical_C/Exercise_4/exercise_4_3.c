/************************************************************************************************************************************
* Write a program to compute the area and perimeter of a rectangle with a width of three inches and a height of five inches.        *
* What changes must be made to the program so that it works for a rectangle with a width of 6.8 inched and a length of 2.3 inches?  *
*************************************************************************************************************************************/

#include <stdio.h>

float width;
float height;

int main() {
        width = 3;
        height = 5;
        float area = (width * height);
        printf("area is %.2f inches", area);
        return 0;
}
