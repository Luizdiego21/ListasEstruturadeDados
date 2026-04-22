/*Criar uma app que seja responsável para calcular a área de 3 figuras geométricas
1) Criar método de construção de menu
2)Utilizar métodos para o cálculo das áreas Retângulo, Quadrado, Triângulo*/

#include<stdio.h>
#include<stdlib.h>

float areaRetangulo(float vbase, float valtura){
    float area = 0;

    area = (vbase * valtura);
    return area;
}
float areaQuadrado(float vlado){
    float area = 0;

    area = (vlado * vlado);
    return area;
}

float areaTriangulo(float vbase, float valtura){
    float area = 0;

    area = (vbase * valtura) / 2;
    return area;
}

int main(int argc, char *argv[]){
float vb, va, vl, varea = 0;
int opc = 0;
do{
    printf("\n");
    printf("CALCULAR AREAS DE FIGURAS GEOMETRICAS\n");
    printf("1. Retangulo\n");
    printf("2. Triangulo\n");
    printf("3. Quadrado\n");
    printf("4. Sair\n");
    scanf("%d", &opc);

    if (opc == 1){
        printf("Digite a base do Retangulo: \n");
        scanf("%f", &vb);
        printf("Digite a altura do Retangulo: \n");
        scanf("%f", &va);

        varea = areaRetangulo(vb, va);
        printf("Area do Retangulo e: %.2f\n", varea);
    }
    else if(opc == 2){
        printf("Digite a base do Triangulo: \n");
        scanf("%f", &vb);
        printf("Digite a altura do Triangulo: \n");
        scanf("%f", &va);

        varea = areaTriangulo(vb, va);
        printf("Area do Triangulo e: %.2f\n", varea);
    }
    else if(opc == 3){
        printf("Digite o lado do Quadrado: \n");
        scanf("%f", &vl);
        varea = areaQuadrado(vl);

        printf("Area do Quadrado e: %.2f\n", varea);
    }
}while(opc != 4);


    return 0;
}