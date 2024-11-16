#include <stdio.h>

int main(){

int totalDays,year,month,days;

scanf("%d",&totalDays);

year = totalDays / 365;

totalDays %= 365;

month = totalDays / 30;

days = totalDays % 30;


printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",year, month, days);


return 0;
}
