/*
Calculadora de triangulo isosceles
David Gagliano Florencio 0050014889
*/
#include<stdio.h>

int main()
{
    

int base, altura, area, opcao;

do
{

printf("Insira a Base: ");
scanf("%d", &base);

printf("Insira a Altura: ");
scanf("%d", &altura);

area = ((base * altura) / 2);

printf("A Area e: %d \n", area);



printf("Pressione (1) para continuar:\n");

scanf("%d",&opcao);  // Verificação do usuário


}

while(opcao == 1); // Se o usuário disser "s" o loop continua e seu programa volta a ser executado de novo

system ("pause");

return 0;
}
