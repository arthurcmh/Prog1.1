#include <stdio.h>
#include <math.h>

int main ()
{
    
    float freq,lb, clre, ciclo, cl, rcd, rp, ras;
    
    
    printf("Insira a frequencia da sua ram:\n ");
    scanf("%f", &freq);
    
    printf("Insira a temporizacao CL:\n");
                   scanf("%f", &cl);
                   
     printf("Insira a temporizacao RCD:\n");
                    scanf("%f", &rcd);
                    
      printf("Insira a temporizacao RP:\n");
                scanf("%f", &rp);     
                
       printf("Insira a temporizacao RAS:\n");
       scanf("%f", &ras);
                      
                      
    
    lb = (freq  * 8);
    
    printf("Largura de banda: %f\n");
    
    clre = (freq /2);
    
    printf("Clock real: %f \n ", clre);
    
    ciclo = ((1/clre) *1000);
    
    printf("Cada ciclo dura %.3f ns\n", ciclo);
    
    //Parei aqui
    
    

    
    
    system ("pause");
}
