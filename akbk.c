/*Ler o arquivo e calcule os coeficientes ak, bk da serie de fourier e ak**2 + bk**2*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void coeficientes(double *x, double *y, int m, char *nome)
{  
   FILE* saida;
   double *a, *b, *ab, somacos=0, somasen=0;
   int k, j;
   
  
  a = malloc(m*sizeof(double));
  b = malloc(m*sizeof(double));
  ab = malloc(m*sizeof(double));
  
  
  saida = fopen(nome, "w");
  
  for(k=0;k<m;k++)
  {	
      
      somacos = somasen =0 ;
  		
  	  for(j=0;j<m-1;j++)
      {  
            
           	somacos = somacos + y[j] * cos(k * x[j]);
    		somasen = somasen + y[j] * sin(k * x[j]);
    		
      } 
       printf("Soma sen : %lf\n", somasen);
       printf("Soma cosseno : %lf\n", somacos);
       
       a[k] = (1/m)*somacos;
       b[k] = (1/m)*somasen;
       ab[k] = a[k] * a[k] + b[k] * b[k];
       
       //printf("%lf\n", a[k]);
       
       fprintf(saida, "%lf\t %lf \t %lf\t  \n", a[k], b[k], ab[k]);
       
  }
    
  
}

int main(int argc, char **argv)
{ 
    FILE *leitura;
    int i, m;
    double *x, *y;
    i=0;
  
 
    
//-----lendo o arquivo para o cálculo dos coeficientes
  
    leitura = fopen(argv[1], "r");
    
    printf("Funcionou\n");
    
    x = malloc(2000*sizeof(double));
    y = malloc(2000*sizeof(double)); 
    
    while( fscanf(leitura, "%lf %lf", &x[i], &y[i]) !=EOF) i++;    
    
    m=i;
    
    printf("%d\n", m);
    x=realloc(x, m*sizeof(*x));
    y=realloc(y, m*sizeof(*y));
    
    coeficientes(x,y,m,argv[2]);
    
    
}    
       
       

