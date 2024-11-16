#include <stdio.h>
#include <stdlib.h> // For abs function

int main() {
    int a, b, c, maiorAB, maior;

    // Read the three integer values
    scanf("%d %d %d", &a, &b, &c);

    // Calculate the greatest of a and b
    maiorAB = (a + b + abs(a - b)) / 2;

    // Calculate the greatest of maiorAB and c
    maior = (maiorAB + c + abs(maiorAB - c)) / 2;

    // Print the result
    printf("%d eh o maior\n", maior);

    return 0;
}
