#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "leitura.h"

/**
 * Realiza a leitura dos parâmetros passados pelo usuário, verifica e os atribui as repectivas variáveis.
 * @param argc Variável que recebe a quantidade de parâmetros.
 * @param argv Vetor de strings, para alocar os parametros.
 * @param *nome Ponteiro de char que recebe o nome do arquivo definido pelo usuário.
*/

void leitura (int argc, char *argv[], int *fatorDesloca, char **nome) {
    
    int i;
    for (i = 0; i < argc; i++) {
            
        if ( ( strcmp(argv[i], "-d") ) == 0 || ( strcmp(argv[i], "-o") == 0 ) ) {

            if ( strcmp(argv[i], "-d") == 0 && (i < (argc-1) ) && argv[i+1][0] != '-') {
        
                *fatorDesloca = atoi(argv[i+1]);
                i++;

            }

            if ( ( strcmp(argv[i], "-o") == 0 ) && (i < (argc-1)) && argv[i+1][0] != '-') {
                *nome = argv[i+1]; 
                i++;

            }

        }

        else if ( (argv[i][0] == '-' && argv[i][1] != 'd') || (argv[i][0] == '-' && argv[i][1] != 'o') ) {

                printf("\nErro: Parâmetros inválidos!\n");
                printf("Utilizar '-d' para definir o fator de deslocamento e '-o' para nomear o arquivo que será gerado.\n");
                printf("Exemplo: ./execute -d 70 -o imagem.ppm\n");
                exit(0);

        }
    }
}