#include<stdio.h>
#include "midpoint.h"

/**
 * Aplica a técnica de geração de contornos, a qual irá formar as montanhas.
 * @param Lcontorno Vetor que será usado para calcular os pontos medios.
 * @param esq Recebe o valor mínimo para o cálculo do deslocamento do ponto do meio.
 * @param dir Recebe o valor máximo para o cálculo do deslocamento do ponto do meio.
 * @param fator Fator de deslocamento que será aplicado após o cálculo dos pontos médios no vetor Lcontorno.
*/

void midpoint (int Lcontorno[], int fator, int esq, int dir) {

    int meio;

    meio = (esq + dir) / 2;

    if (esq < dir - 1) {

        if (rand() % 2) {
          
            Lcontorno[meio] = ( (Lcontorno[esq] + Lcontorno[dir] ) / 2 + fator );
            Lcontorno[meio] = ( (Lcontorno[esq] + Lcontorno[dir] ) / 2 + fator );
            Lcontorno[meio] = ( (Lcontorno[esq] + Lcontorno[dir] ) / 2 + fator );
        } 
        
        else {
         
            Lcontorno[meio] = ( (Lcontorno[esq] + Lcontorno[dir] ) / 2 - fator );
            Lcontorno[meio] = ( (Lcontorno[esq] + Lcontorno[dir] ) / 2 - fator );
            Lcontorno[meio] = ( (Lcontorno[esq] + Lcontorno[dir] ) / 2 - fator );
        
        }
        
        midpoint (Lcontorno, fator/2, esq, meio);
        midpoint (Lcontorno, fator/2, meio, dir);
    } 
}