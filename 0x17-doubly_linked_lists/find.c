#include <stdio.h>

int is_palindrome(int num) {
    int reverse = 0, original = num;
    while (num > 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }
    return original == reverse;
}

int main() {
    int largest_palindrome = 0;
    for (int i = 999; i >= 100; i--) {
        for (int j = i; j >= 100; j--) {
            int product = i * j;
            if (is_palindrome(product) && product > largest_palindrome) {
                largest_palindrome = product;
            }
        }
    }

    FILE *file = fopen("102-result", "w");
    if (file != NULL) {
        fprintf(file, "%d", largest_palindrome);
        fclose(file);
    } else {
        printf("Error opening file.\n");
        return 1;
    }

    return 0;
}

