#include <stdio.h>

int main(){

int anirdomY,nayemY,nithishY,anirdomYear,nayemYear,nithishYear;

scanf("%d %d %d",&anirdomY,&nayemY,&nithishY);

anirdomYear=2025-anirdomY;
nayemYear=2025-nayemY;
nithishYear=2025-nithishY;

printf("%d\n%d\n%d\n",anirdomYear,nayemYear,nithishYear);

if(anirdomYear>nayemYear && anirdomYear>nithishYear){
    printf("Arindom\n");
}
else if(nayemYear>anirdomYear && nayemYear>nithishYear){
    printf("Nayem\n");
}
else if(niteshyear>anirdomYear && niteshy>nayemy){
    printf("Nitesh\n");
}


return 0;
}
