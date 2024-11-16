#include <stdio.h>

int main(){

int anirdomY,nayemY,nithishY, anirdomYear, nayemYear, nithishYear;

scanf("%d %d %d",&anirdomY,&nayemY,&nithishY);

anirdomYear=2025-anirdomY;
nayemYear=2025-nayemY;
nithishYear=2025-nithishY;

printf("%d\n%d\n%d\n",anirdomYear,nayemYear,nithishYear);

if(anirdomYear>nayemYear){
    printf("Anirdom\n");
}
else if(anirdomYear>nithishYear){
    printf("Arindom\n");
}
else if(nayemYear>anirdomYear){
    printf("Nayem\n");
}
else if(nayemYear>nithishYear){
    printf("Nayem\n");
}
else{
    printf("Nitesh\n");
}

return 0;
}
