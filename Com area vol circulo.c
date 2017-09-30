/*
Calculadora de triangulo isosceles
David Gagliano Florencio 0050014889
*/
#include<stdio.h>
#include<math.h>

int main()
{
    

int  opcao;
float raio, area, vol, circ;
do
{


printf("Insira o raio: ");
scanf("%f", &raio);

circ = (2 * 3.14 * raio);

printf("O comprimento de circunferencia e: %f \n", circ);

area = (3.14 * raio * raio);

printf("A Area e: %f \n", area);

vol = ((4 * 3.14 * pow(raio,3))/3);

printf("O volume e: %f \n", vol);

printf("Pressione (1) para continuar:\n");

scanf("%d",&opcao);  // Verificação do usuário


}

while(opcao == 1); // Se o usuário disser "s" o loop continua e seu programa volta a ser executado de novo

system ("pause");

return 0;
}
