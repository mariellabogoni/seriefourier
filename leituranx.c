/*Programa que lê e cria um arquivo com 1024 pontos entre -pi,pi e imprimir os valores de sin(3x)
*/
#include <stdio.h>
#include <math.h>
int main(int argc, char **argv)
{ 
    FILE *pontos;
    int i, m, n=1024, h;
    double x, y, xmin, xmax, ymax, ymin, dy, dx;
    
    
	pontos = fopen(argv[1], "w");

	xmin = -M_PI;
	xmax = M_PI;
        dx = (xmax-(xmin))/n;
        
        ymin = -1.0;
        ymax = 1.0;
        dy = (ymax-(ymin))/n;
        
        x=xmin;
        y=ymin;
   
        do 
        {  	
        	fprintf(pontos, "%lf\t %lf\t\n", x,y);
        	x+=dx;
                y+=dy;
                
        }while(x<xmax&&y<ymax);        
                
    
   	 fclose(pontos);
  
}    
       
       

