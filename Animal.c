#include <stdio.h>
#include <string.h>
int main(){

char char1[20], char2[20], char3[20];

scanf("%s %s %s", char1, char2, char3);

if (strcmp(char1, "vertebrado") == 0 && strcmp(char2, "ave") == 0 && strcmp(char3, "carnivoro") == 0) {
        printf("aguia\n");
    } else if (strcmp(char1, "vertebrado") == 0 && strcmp(char2, "ave") == 0 && strcmp(char3, "onivoro") == 0) {
        printf("pomba\n");
    } else if (strcmp(char1, "vertebrado") == 0 && strcmp(char2, "mamifero") == 0 && strcmp(char3, "onivoro") == 0) {
        printf("homem\n");
    } else if (strcmp(char1, "vertebrado") == 0 && strcmp(char2, "mamifero") == 0 && strcmp(char3, "herbivoro") == 0) {
        printf("vaca\n");
    } else if (strcmp(char1, "invertebrado") == 0 && strcmp(char2, "inseto") == 0 && strcmp(char3, "hematofago") == 0) {
        printf("pulga\n");
    } else if (strcmp(char1, "invertebrado") == 0 && strcmp(char2, "inseto") == 0 && strcmp(char3, "herbivoro") == 0) {
        printf("lagarta\n");
    } else if (strcmp(char1, "invertebrado") == 0 && strcmp(char2, "anelideo") == 0 && strcmp(char3, "hematofago") == 0) {
        printf("sanguessuga\n");
    } else if (strcmp(char1, "invertebrado") == 0 && strcmp(char2, "anelideo") == 0 && strcmp(char3, "onivoro") == 0) {
        printf("minhoca\n");
    }
return 0;
}
