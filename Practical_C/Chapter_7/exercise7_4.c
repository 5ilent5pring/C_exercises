#include <stdio.h>
#include <math.h>

int main() {
    double amount;
    double taxRate = 0.08;
    double total;

    printf("Enter the amount: ");
    scanf("%lf", &amount);

    total = amount + (amount * taxRate);

    total = round(total * 100 / 100); // gcc throw error on round function, so you need to send the compiling command like this: gcc exer7_4.c -o exer7_4 -lm
    printf("After tax applied: $%.2f\n", total);

    return 0;
}
