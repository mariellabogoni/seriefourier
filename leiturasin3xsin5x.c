/*Programa que lê e cria um arquivo com 1024 pontos entre -pi,pi e imprimir os valores de sin(3x)
*/
#include <stdio.h>
#include <math.h>
int main(int argc, char **argv)
{ 
    FILE *pontos;
    int i, m, n=1024, h;
    double x,y, y1, y2, xmin, xmax, dx;
    
    
	 pontos = fopen(argv[1], "w");
	
	xmin = -M_PI;
	xmax = M_PI;
   dx = (xmax-(xmin))/n;
   
	for(x=xmin ; x<xmax ; x+=dx)
	{  
	   y1 = sin(3*x);
	   y2 = sin(5*x); 
	   y = y1*y2;
	   
	   fprintf(pontos, "%lf\t %lf\t \n", x,y);
	   printf("%lf\t %lf\t \n", x,y);
	}   
	  
    fclose(pontos);
    
    
 }   
