#include <stdio.h>
#include "midpoint.h"

/**
 * Cria um arquivo e escreve a matriz nele.
 * @param nome[15] Nome do arquivo que será gerado.
 * @param size Tamanho da matriz.
 * @param matriz[size][size] Matriz com todos os valores dos pixels para poder gerar a paisagem.
*/

void gerar (char nome[15], int size, Pixel matriz[size][size]) {

    char *url = nome; 
    FILE *arq; 

    arq = fopen(url, "w");
    
    if (arq == NULL) { 
    
        printf ("Erro, nao foi possivel abrir o arquivo\n");
    }
   
    else {  
        
        fprintf (arq, "P3\n");
        fprintf (arq, "513 513\n");
        fprintf (arq, "255\n");
            
            int i, j;
            for (i = 0; i < size; i++) {
            
                for (j = 0; j < size; j++) {

                    fprintf (arq, "%i %i %i\n", matriz[i][j].r, matriz[i][j].g, matriz[i][j].b);
                }
            
                fprintf(arq, "\n");
            }
    }

    fclose(arq); 
}