#include<stdio.h>

int main(){
float n1, n2, tr, nc, mf;
printf("Digite as Notas do aluno respectivamente: (N1, N2, Trabalho)\n");
scanf("%f %f %f", &n1, &n2, &tr);   

mf = n1 * 0.4 + n2 * 0.4 + tr * 0.2;

if(mf < 6){
    printf("Aluno retido, com media: %2.f", mf);
}else{



printf("Aluno aprovado, com media: %2.f",mf);
}
    return 0;
}