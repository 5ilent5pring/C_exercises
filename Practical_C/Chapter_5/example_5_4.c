#include <string.h>
#include <stdio.h>

char line[100]; //line we are looking at

int main() {
  printf("Enter a line: ");
  fgets(line, sizeof(line), stdin);

  printf("The length of the line is: %d\n", strlen(line));
  return 0;
}

// length of the line is 5 bcz fgets includes the end-of-the-line in the string, so the fifth character is newline (\n)
