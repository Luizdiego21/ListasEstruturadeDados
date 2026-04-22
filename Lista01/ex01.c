#include<stdio.h>

int main(){
    float num1, num2;
printf("Digite o primeiro numero:\n");
scanf("%f", &num1);
printf("Digite o segundo numero:\n");
scanf("%f", &num2);

if(num1 == num2){
    printf("Atencao os dois numeros sao iguais!");
}else if (num1 < num2){
        printf("Segundo numero maior %.2f\n", num2);
    }else{
    if(num1 > num2){
        printf("Primeiro numero maior %.2f\n", num1);
    }
    }
return 0;
}