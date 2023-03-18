#include <iostream>



int main() {
	float c;
	float fret;
	float desp;
	float venda;
	float lucro;
	float lucrop;
	float rec;
	printf("bem vindo a sua calculadora de lucros :) \n");
	printf("\n digite o valor de custo da mercadoria: \t");
	scanf("%f", &c);
	printf("\nagora digite o valor do frete; \t");
	scanf("%f", &fret);
	printf("\n agora digite as eventuais dispesas: \t");
	scanf("%f", &desp);
	printf("\n agora o valor que esta mercadoria sera ou foi vendida : \t");
	scanf("%f", &venda);
	rec = (c + fret + desp);
	lucro = venda - rec;
	lucrop = (lucro / rec) * 100;
	printf("\n seu lucro em porcentagem foi de : \t %.2f ", lucrop);
	printf("\n Ja seu lucro em Reais foi de: \t %2.f", lucro);
	
	
	return 0;
}