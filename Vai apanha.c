/***********************************
* Trab 2 : Numeros Primos
* Nome e Matricula: David gagliano Florencio 0050014889
* Professor: Alex Salgado
***********************************/

#include <stdio.h>
#include <stdlib.h>

int main ()

{
int num, eprimo=2, i;
printf("Verificador de numero primo, caso ele nao seja primo, o programa nao ira acusar.\n");
	printf("Digite um valor: \n");
	
	scanf("%d", &num);
	
	for (i=2; i < num; i++){ // Ou for (i=num-1; i>1; i--)
	
		if (num % i ==0)
		
		{ printf("%d nao e primo!\n", num);
		
		break; //encerra o for
		}
	}	
	system("pause");
}

