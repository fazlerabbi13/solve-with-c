#include <stdio.h>

int main() {
    double amount;
    int notes, coins;

    // Read the input value
    scanf("%lf", &amount);

    // Convert amount to integer (in cents) to avoid precision issues
    int total = (int)(amount  * 100 + 0.5);
    printf("%d",total);
    // NOTES
    printf("NOTAS:\n");

    // Notes of 100
    notes = total / 10000;
    printf("%d nota(s) de R$ 100.00\n", notes);
    total %= 10000;

    // Notes of 50
    notes = total / 5000;
    printf("%d nota(s) de R$ 50.00\n", notes);
    total %= 5000;

    // Notes of 20
    notes = total / 2000;
    printf("%d nota(s) de R$ 20.00\n", notes);
    total %= 2000;

    // Notes of 10
    notes = total / 1000;
    printf("%d nota(s) de R$ 10.00\n", notes);
    total %= 1000;

    // Notes of 5
    notes = total / 500;
    printf("%d nota(s) de R$ 5.00\n", notes);
    total %= 500;

    // Notes of 2
    notes = total / 200;
    printf("%d nota(s) de R$ 2.00\n", notes);
    total %= 200;

    // COINS
    printf("MOEDAS:\n");

    // Coins of 1
    coins = total / 100;
    printf("%d moeda(s) de R$ 1.00\n", coins);
    total %= 100;

    // Coins of 0.50
    coins = total / 50;
    printf("%d moeda(s) de R$ 0.50\n", coins);
    total %= 50;

    // Coins of 0.25
    coins = total / 25;
    printf("%d moeda(s) de R$ 0.25\n", coins);
    total %= 25;

    // Coins of 0.10
    coins = total / 10;
    printf("%d moeda(s) de R$ 0.10\n", coins);
    total %= 10;

    // Coins of 0.05
    coins = total / 5;
    printf("%d moeda(s) de R$ 0.05\n", coins);
    total %= 5;

    // Coins of 0.01
    coins = total;
    printf("%d moeda(s) de R$ 0.01\n", coins);

    return 0;
}

