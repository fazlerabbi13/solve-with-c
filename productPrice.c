#include <stdio.h>

int main(){

int productOneCode, proOneNumOfUnit, productTwoCode, proTwoNumOfUnit;

double proOnePriPerUnit, proTwoPriPerUnit, totalValue;

scanf("%d %d %lf", &productOneCode, &proOneNumOfUnit, &proOnePriPerUnit);

scanf("%d %d %lf", &productTwoCode, &proTwoNumOfUnit, &proTwoPriPerUnit);


totalValue = (proOneNumOfUnit * proOnePriPerUnit) + (proTwoNumOfUnit * proTwoPriPerUnit);


printf("VALOR A PAGAR: R$ %.2lf\n",totalValue);

return 0;
}
