#include <stdio.h>

int main(){

int choice,a,b;
int add,sub,mult,divi,mod;

printf("1.Addition\n");
printf("2.Substraction\n");
printf("3.Multiplication\n");
printf("4.Division\n");
printf("5.Modulus\n");

printf("please enter your choice [1-5]: ");
scanf("%d",&choice);

if(choice == 1){
    printf("\n\nplease enter your two integer: ");
    scanf("%d%d",&a,&b);
    add = a + b;
    printf("\nthe addition is: %d\n\n",add);
}
else if(choice == 2){
    printf("\n\nplease enter your two integer: ");
    scanf("%d%d",&a,&b);
    sub = a - b;
    printf("\nthe substraction is: %d\n\n",sub);
}
else if(choice == 3){
    printf("\n\nplease enter your two integer: ");
    scanf("%d%d",&a,&b);
    mult = a * b;
    printf("\nthe multiplication is: %d\n\n",mult);
}
else if(choice == 4){
    printf("\n\nplease enter your two integer: ");
    scanf("%d%d",&a,&b);
    divi = a / b;
    printf("the division is: %d",divi);
}
else if(choice == 5){
    printf("\n\nplease enter your two integer: ");
    scanf("%d%d",&a,&b);
    mod = a % b;
    printf("\nthe modulus is: %d\n\n",mod);
}

return 0;
}
