#include <stdio.h>
#include <string.h>

char first[100]; //first name
char last[100]; //last name
char full[200]; //first and last name

int main() {
  printf("Enter first name: ");
  fgets(first, sizeof(first), stdin);
  first(strlen(first)-1) = '\0'; //trim off last character

  printf("Enter last name: ");
  fgets(last, sizeof(last), stdin);
  last(strlen(last)-1) = '\0';

  strcpy(full, first);
  strcat(full, " ");
  strcat(full, last);

  printf("The name is %s\n", full);
  return 0;
}
