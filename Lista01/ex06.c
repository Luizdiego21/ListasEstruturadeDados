#include<stdio.h>


int main(){
int ano; 
float imposto, lucro, vlrVenda, vlrCompra, ipi, icms;
printf("Digite o ano de fabricacao:\n");
scanf("%d", &ano);
printf("Digite o preço de fabrica do veiculo: \n");
scanf("%f", &vlrCompra);

if(ano <= 2000){
ipi = vlrCompra * 0.10;
icms = vlrCompra * 0.05;
lucro = vlrCompra *0.25;
vlrVenda = ipi + icms + lucro + vlrCompra;
printf("IPI: %.2f \n", ipi);
printf("ICMS: %.2f \n", icms);
printf("LUCRO: %.2f \n", lucro);
printf("VALOR COMPRA: %.2f\n", vlrCompra);
printf("Valor de venda: %.2f\n", vlrVenda);
}else if (ano > 2000 && ano <= 2010){
ipi = vlrCompra * 0.11;
icms = vlrCompra * 0.07;
lucro = vlrCompra * 0.20;
vlrVenda = ipi + icms + lucro + vlrCompra;
printf("IPI: %.2f \n", ipi);
printf("ICMS: %.2f \n", icms);
printf("LUCRO: %.2f \n", lucro);
printf("VALOR COMPRA: %.2f\n", vlrCompra);
printf("Valor de venda: %.2f\n", vlrVenda);
}else{
ipi = vlrCompra * 0.13;
icms = vlrCompra * 0.07;
lucro = vlrCompra *0.20;
vlrVenda = ipi + icms + lucro + vlrCompra;
printf("IPI: %.2f \n", ipi);
printf("ICMS: %.2f \n", icms);
printf("LUCRO: %.2f \n", lucro);
printf("VALOR COMPRA: %.2f\n", vlrCompra);
printf("Valor de venda: %.2f\n", vlrVenda);
}


return 0;
}