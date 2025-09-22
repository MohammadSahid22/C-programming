#include <stdio.h>

int main() {
    int num, rev = 0, temp, original;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    while (num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    if (original == rev)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}
