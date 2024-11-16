#include <stdio.h>

int main(){

int spentTime,averageSpeed;

double fuelSpent;

scanf("%d %d", &spentTime,&averageSpeed);

fuelSpent = (averageSpeed * spentTime) / 12.0;

printf("%.3lf\n", fuelSpent);

return 0;
}
