#include <stdio.h>

int main() {
    int number,digit;
    printf("Please enter a number:");
    scanf("%d",&number);
    digit = number % 10;
    printf("You entered: %d\n有 %d 位数", number, digit);
    return 0;
}
