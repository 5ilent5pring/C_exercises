#include <string.h>
#include <stdio.h>

char first[100]; //first name
char last[100]; //last name
char full_name[200]; //full version of first and last name

int main() {
  strcpy(first, "Steve");  //initialize first name
  strcpy(last, "Qualline");  //initialize last name

  strcpy(full_name, first);  //full = "Steve"
  strcat(full_name, " ");  //full = "Steve "
  strcat(full_name, last);  //full = "Steve Qualline"

  printf("The full name is %s\n", full_name);
  return 0;
}
