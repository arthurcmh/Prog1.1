/*
Autor: David Gagliano Florencio
Programa para calcular frequências e temporizações de uma memória ram ddr3 e ddr4.
*/
#include <stdio.h>
#include <math.h>

int opcao;
float tcl, trcd, trp, tras;
float freq,lb, cl,clre, ciclo, rcd, rp, ras;
float nfreq,nlb,nciclo,ncl,nrcd,nrp,nras,aum;

int main(){
	do{
	printf("###Calculador de memoria ram (DDR3 / DDR4)\n");
	printf("Insira a frequencia da sua ram:\n ");
	scanf("%f", &freq);
	printf("Insira a temporizacao CL:\t");
	scanf("%f", &cl);    
	printf("Insira a temporizacao tRCD:\t");
	scanf("%f", &rcd);     
	printf("Insira a temporizacao tRP:\t");
	scanf("%f", &rp);       
	printf("Insira a temporizacao tRAS:\t");
	scanf("%f", &ras);         
	printf("\n"); //espaço          
	lb = (freq  * 8);
	printf("Largura de banda: %.0f mb/s \n", lb);
	clre = (freq /2);
	printf("Clock real: %3.f mhz \n ", clre);
	ciclo = ((1/clre)*1000);
	printf("Cada ciclo dura: %.3f ns\n", ciclo);
	printf("\n"); //espaço
	tcl = (ciclo * cl);
	printf("A temporizacao CL demora %.2f ns...\n", tcl);
	trcd = (ciclo * rcd);
	printf("A temporizacao tRCD demora %.2f ns...\n", trcd);
	trp = (ciclo * rp);
	printf("A temporizacao tRP demora %.2f ns...\n", trp);
	tras = (ciclo * ras);
	printf("A temporizacao tRAS demora %.2f ns...\n", tras);
//Final da calculadora 1
	printf("--------------------------------------------------------\n");
	printf("DDR3 Tensao recomendada 1.5 ~ 1.65\nDDR4 Tensao recomendada 1.2 ~ 1.35 [1.35 ~ 1.45 Quente! Risco de encurtar vida util.] \n{DDR4 - 1.5V = Absolute max voltage allowed for Intel XMP}");
	printf("\n--------------------------------------------------------\n"); // Espaço para overclock
	printf("[OC - Overclock] Entre com a nova frequencia pretendida:\n");
	scanf("%f", &nfreq);
	printf("\n"); //Espaço
	nlb = (nfreq * 8);
	aum = (nlb - lb);
	printf("Nova largura de banda: %.0f mb/s. | Aumento de %.0f mb/s | \n", nlb, aum);
	clre = (nfreq /2);
	printf("Novo clock real: %3.f mhz \n ", clre);
	ciclo = ((1/clre)*1000);
	printf("Cada ciclo dura: %.3f ns\n", ciclo);
	printf("\n"); // Espaço
	ncl = (tcl/ciclo);
	printf("Novo CL tera que ser:   |%.0f| \n", ncl);
	nrcd = (trcd/ciclo);
	printf("Novo tRCD tera que ser: |%.0f| \n", nrcd);
	nrp = (trp/ciclo);
	printf("Novo tRP tera que ser:  |%.0f| \n", nrp);
	nras = (tras/ciclo);
	printf("Novo tRAS tera que ser: |%.0f| \n", nras);
	printf("Talvez seja necessario alterar o CMD - Command Rate T1 -> T2\n");
//Opção de repetir logo abaixo!
	printf("\nEntre com o numero (1) para repetir...\n");
	scanf("%d", &opcao);
	}
	while (opcao == 1); // Opção de voltar ao começo. Caso erre.
	
	system ("pause");
}
