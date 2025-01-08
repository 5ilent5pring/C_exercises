#include <stdio.h>

char line[100]; //line of input data
int height; //height of the triangle
int width; //width of the triangle
int area; //area of the triangle

int main() {

        printf("Enter width height? ");

        fgets(line, sizeof(line), stdin);
        sscanf(line, "%d %d", &width, &height);

        area = (width * height) / 2;
        printf("The area is %d\n", area);
        return 0;
}
