#include <stdio.h>
int main() {
    int num, i = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Multiplication table of %d:\n", num);
    while (i <= 10) {
        int product = num * i;
        printf("%d x %d = %d\n", num, i, product);
        i++;
    }
    return 0;
}
