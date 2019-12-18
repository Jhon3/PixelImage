#include <stdlib.h>
#include <time.h>

#ifndef _MIDPOINT_H_
#define _MIDPOINT_H_

typedef struct {

    int r;
    int g;
    int b;

} Pixel;

void midpoint (int Lcontorno[], int fator, int esq, int dir);

#endif