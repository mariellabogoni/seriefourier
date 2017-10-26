#include <stdio.h>
#include <math.h>
int main(int argc, char **argv)
{ 
    FILE *leiturapiano;
    FILE *pontos;
    int i, m, n=1024, h;
    double x[1024], y, xmin, xmax, ymax, ymin, dy, dx;
    
    
    leiturapiano=fopen("piano.txt","r");
    
    pontos = fopen(argv[1], "w");
   
    for(i=0;i<1024;i++)  			//armazenei os dados de piano num vetor
    { 
       fscanf(leiturapiano, "%lf\t", &x[i]);
    } 
    
    
//--------------Agora, vou inserir num arquivo a coluna dos pontos e x e a coluna dos pontos de y. Onde x serão os pontos do arquivo
// piano.txt e y serão os pontos gerados no intervalo de [-1,1]    
    
    ymin = -1.0;
    ymax = 1.0;
    dy = (ymax-(ymin))/n;

    y=ymin;
    
    i=0;
    do 
    {  	
        	fprintf(pontos, "%lf\t %lf\t\n", x[i],y);
        	i++;
                y+=dy;
                
    }while(y<ymax && i<(1024.0));
    
    
    
    fclose(pontos);
   
   

	
  
} 
