#include<stdio.h>

int main(){
int num1, num2, num3, troca;
printf("Digite tres numeros inteiros diferentes:\n");
scanf("%d %d %d", &num1, &num2, &num3);
if(num1 == num2 || num1 == num3 || num2 == num3){
    printf("Atencao, os numeros nao podem ser iguais");
}
if(num1 > num2){
    troca = num1;
    num1 = num2;
    num2 = troca;
}

if(num1 > num3){
troca = num1;
num1 = num3;
num3 = troca;
}
if(num2 > num3){
    troca = num2;
    num2 = num3;
    num3 = troca;    
}
printf("Ordem crescente: %d %d %d", num1, num2, num3);

return 0;
}