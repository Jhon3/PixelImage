#include <stdio.h>

#ifndef _BACKGROUND_H_
#define _BACKGROUND_H_

typedef enum {
    
    CREPUSCULO = 1,
    NOITE,
    DIA
    
} CEU;

void background (int size, Pixel matriz[size][size], int Lcontorno1[], int Lcontorno2[], int menor, int fator);

#endif