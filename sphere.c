#include <stdio.h>

int main(){

const double pi = 3.14159;

double radius,VOLUME;

scanf("%lf", &radius);

VOLUME = 4/3.0 * pi * (radius * radius * radius);

printf("VOLUME = %.3lf\n",VOLUME);


return 0;
}
