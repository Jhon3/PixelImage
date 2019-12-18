#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "midpoint.h"
#include "background.h"
#include "gerar.h"
#include "leitura.h"

int main (int argc, char *argv[]) {
    
    int maximo1 = 450;
    int minimo1 = 400;
    int maximo2 = 300;
    int minimo2 = 250;

    int size = 513;
    int contorno1[size], contorno2[size];
    int fatorDesloca;
    char *nome;

    fatorDesloca = 60;
    nome = "cenario.ppm";
    
    Pixel cena[size][size];

    contorno1[0] = minimo1;
    contorno1[size] = maximo1;
    contorno2[0] = minimo2;
    contorno2[size] = maximo2;

    srand ( time (NULL) );

    leitura (argc, argv, &fatorDesloca, &nome);
    midpoint (contorno1, fatorDesloca, 0, size);
    midpoint (contorno2, fatorDesloca, 0, size);
    background (size, cena, contorno1, contorno2, minimo2, fatorDesloca);
    gerar (nome, size, cena);

    return 0;
}