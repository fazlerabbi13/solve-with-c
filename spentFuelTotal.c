#include <stdio.h>

int main(){

int X;
double Y,spentFuelTotal;

scanf("%d %lf", &X, &Y);

spentFuelTotal = X / Y;

printf("%.3lf km/l\nk",spentFuelTotal);

return 0;
}
