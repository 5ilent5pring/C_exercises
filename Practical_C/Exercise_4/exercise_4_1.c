/**************************************************************************************
*  Write a program to print your name -, social security number, and date of birth    *
***************************************************************************************/
#include <stdio.h>
#include <stdint.h>
//char Name[18];
//int SecID;
//char Birthdate[10];

int main() {
        char Name[] = "Cyber Caretta";
        int64_t SecID = 12345678910;
        char Birthdate[] = "01.01.1991";
        printf("%s has a %ld security number and birth date is %s\n", Name, SecID, Birthdate);
        return 0;
}
