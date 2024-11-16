#include <stdio.h>

int main() {
    int amount, note;

    // Reading the input amount
    scanf("%d", &amount);

    printf("%d\n", amount);

    // For each banknote denomination
    int notes[] = {100, 50, 20, 10, 5, 2, 1};

    // Iterating over all possible notes
    for (int i = 0; i < 7; i++) {
        note = notes[i];
        printf("%d nota(s) de R$ %d,00\n", amount / note, note); // Print number of notes for the current denomination
        amount %= note; // Update remaining amount
    }

    return 0;
}
