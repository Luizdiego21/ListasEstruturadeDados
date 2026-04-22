#include<stdio.h>

int main(){
int branco, nulo, valido, totalVotos;
float porcentBranco, porcentNulo, porcentValido;
printf("Digite a quantidade de votos em branco: \n");
scanf("%d", &branco);
printf("Digite a quantidade de votos nulos: \n");
scanf("%d", &nulo);
printf("Digite a quantidade de votos valido:\n");
scanf("%d", &valido);

totalVotos = branco + nulo + valido;
printf("O total de votos foi de: %d \n", totalVotos);
    
porcentBranco =  branco * 100.0 / totalVotos;
printf("Porcentagem de votos brancos foram de: %2.f\n", porcentBranco);

porcentNulo = nulo * 100.0 / totalVotos;
printf("Porcentagem de votos nulos foram de: %2.f\n", porcentNulo);

porcentValido = valido * 100.0 / totalVotos;
printf("Porcentagem de votos validos foram de: %2.f\n", porcentValido);
return 0;
}