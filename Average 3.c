#include <stdio.h>

int main(){

float N1,N2,N3,N4,average,examscore,finalAverage;
scanf("%f %f %f %f",&N1,&N2,&N3,&N4);
average = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / 10;

printf("Media:%.1f\n", average);

if(average >= 7.0){
   printf("Aluno aprovado.\n");
}
else if(average < 5.0){
   printf("Aluno reprovado.\n");
}
else{
    printf("Aluno em exame.\n");

    scanf("%f", &examscore);
    printf("Nota do exame:%.1f\n",examscore);

    finalAverage = (examscore + average) / 2;

    if(finalAverage >= 5.0){

    printf("Aluno aprovado.\n");

    }else if(finalAverage <= 4.9){

        printf("Aluno reprovado.\n");

    }

    printf("Media final: %.1f\n",finalAverage);
}
return 0;
}
