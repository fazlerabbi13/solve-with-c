#include <stdio.h>

int main(){

char employeFirstName[50];

double fixedSalary,totalSale,totalSalary;

//printf("enter first name: \n");
scanf("%s",&employeFirstName);

//printf("enter fixed salary: \n");
scanf("%lf",&fixedSalary);


//printf("enter total sales: \n");
scanf("%lf",&totalSale);

totalSalary = fixedSalary + (totalSale * 0.15);

printf("TOTAL = R$ %.2lf", totalSalary);

return 0;
}
