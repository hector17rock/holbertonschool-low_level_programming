#include <stdio.h>

void print_alphabet_ten_times() {
    for (int i = 0; i < 10; i++) {
        for (char ch = 'a'; ch <= 'z'; ch++) {
            putchar(ch);  // Print each letter of the alphabet
        }
        putchar('\n');  // Print a new line after each alphabet
    }
}

int main() {
    print_alphabet_ten_times();  // Call the function
    return 0;
}
