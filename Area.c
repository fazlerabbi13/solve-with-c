#include <stdio.h>
#define PI 3.14159
int main(){

double A,B,C;

scanf("%lf %lf %lf",&A, &B, &C);

double TRIANGULO = (A * C) / 2;
double CIRCULO = PI * (C * C);
double TRAPEZIO = ((A + B) * C) / 2;
double QUADRADO = B * B;
double RETANGULO = A * B;

printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO);



return 0;
}
