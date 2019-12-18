#include <stdio.h>
#include "midpoint.h"
#include "background.h"

/**
 * Cria a paisagem dos três tipos de céus: Crepúsculo, noite e dia.
 * @param size Tamanho da matriz 
 * @param matriz[size][size] Matriz para receber os valores dos pixels.
 * @param Lcontorno[] Vetor com os valores para "desenhar" o contorno da montanha, calculados na função "midpoint".
 * @param menor Valor que será usado para garantir que as estrelas fiquem acima das montanhas.
 * @param fator O fator de deslocamento será usado para garantir que as estrelas fiquem acima das montanhas.
*/

void background (int size, Pixel matriz[size][size], int Lcontorno1[], int Lcontorno2[], int menor, int fator) {

    int i, j;
    int lin, col;
    
    CEU Ceu = 1 + rand () % 3;

        switch (Ceu) {
        
            case CREPUSCULO:

                //Céu
                for (i = 0; i < 513; i++) {    
       
                    for (j = 0; j < 513; j++) {

                        if (i < Lcontorno1[j]) {

                            matriz[i][j].r = 0;
                            matriz[i][j].g = 0;
                            matriz[i][j].b = 10;
                        }

                        else {
             
                            matriz[i][j].r = 0;
                            matriz[i][j].g = 0;
                            matriz[i][j].b = 0; 
                        }
           
                    
                

                         if (i < Lcontorno2[j]) {

                            matriz[i][j].r = 20 + (i * 0.4);
                            matriz[i][j].g = 0;
                            matriz[i][j].b = 100 + (i * 0.5);

                        }
                    }
                }

              
                //EStrelas
                for (i = 0; i < 80; i++) {

                    lin = ( rand() % (menor-fator) );
                    col = ( rand() % 513 );

                    matriz[ lin ][ col ].r = 255;
                    matriz[ lin ][ col ].g = 250;
                    matriz[ lin ][ col ].b = 255;
    
                }

            break;
            
            case NOITE:

               //Céu
                for (i = 0; i < 513; i++) {    
       
                    for (j = 0; j < 513; j++) {
         
                        if (i < Lcontorno1[j]) {

                            matriz[i][j].r = 0;
                            matriz[i][j].g = 0;
                            matriz[i][j].b = 10;

                        }
                        
                        else {
             
                            matriz[i][j].r = 0;
                            matriz[i][j].g = 0;
                            matriz[i][j].b = 0; 
                        }

                         if (i < Lcontorno2[j]) {

                            matriz[i][j].r = 0;
                            matriz[i][j].g = 0;
                            matriz[i][j].b = 100 + (i * 0.5);

                        }
                    }
                }

                //EStrelas
                for (i = 0; i < 80; i++) {

                    lin = ( rand() % (menor-fator) );
                    col = ( rand() % 513 );

                    matriz[ lin ][ col ].r = 255;
                    matriz[ lin ][ col ].g = 250;
                    matriz[ lin ][ col ].b = 255;
    
                }

            break;

            case DIA:

                //Céu
                for (i = 0; i < 513; i++) {    
       
                    for (j = 0; j < 513; j++) {
         
                        if (i < Lcontorno1[j]) {

                            matriz[i][j].r = 50;
                            matriz[i][j].g = 30;
                            matriz[i][j].b = 0;

                        }

                        else {
             
                            matriz[i][j].r = 102;
                            matriz[i][j].g = 51;
                            matriz[i][j].b = 0;
                        }

                         if (i < Lcontorno2[j]) {

                            matriz[i][j].r = 0 + ( i / 2);
                            matriz[i][j].g = 150 + ( i / 3);
                            matriz[i][j].b = 200 + (i / 10);

                        }
                    }
                }

                //Sol
                for (i = 50; i < 100; i++) {    
        
                    for (j = 50; j < 100; j++) {
                            matriz[i][j].r = 200;
                            matriz[i][j].g = 200;
                            matriz[i][j].b = 0;
                    }
                } 

                //Nuvens
                //1º nuvem
                for (i = 155; i < 170; i++) {    
        
                    for (j = 150; j < 250; j++) {
                            matriz[i][j].r = 250;
                            matriz[i][j].g = 250;
                            matriz[i][j].b = 250;
                    }
                } 

                for (i = 150; i < 175; i++) {    
        
                    for (j = 175; j < 225; j++) {
                        matriz[i][j].r = 250;
                        matriz[i][j].g = 250;
                        matriz[i][j].b = 250;
                    }
                } 
                
                for (i = 145; i < 180; i++) {    
        
                    for (j = 195; j < 205; j++) {
                        matriz[i][j].r = 250;
                        matriz[i][j].g = 250;
                        matriz[i][j].b = 250;
                    }
                } 

                // 2º nuvem
                for (i = 50; i < 65; i++) {    
       
                    for (j = 260; j < 360; j++) {
                        matriz[i][j].r = 250;
                        matriz[i][j].g = 250;
                        matriz[i][j].b = 250;
                    }
                } 

                for (i = 45; i < 70; i++) {    
       
                    for (j = 285; j < 335; j++) {
                        matriz[i][j].r = 250;
                        matriz[i][j].g = 250;
                        matriz[i][j].b = 250;
                    }
                } 
                    
                for (i = 40; i < 75; i++) {    
       
                     for (j = 305; j < 320; j++) {
                        matriz[i][j].r = 250;
                        matriz[i][j].g = 250;
                        matriz[i][j].b = 250;
                    }
                } 
                
                // 3º nuvem
                for (i = 120; i < 135; i++) {    
       
                    for (j = 350; j < 450; j++) {
                        matriz[i][j].r = 250;
                        matriz[i][j].g = 250;
                        matriz[i][j].b = 250;
                    }
                } 

                for (i = 115; i < 140; i++) {    
       
                    for (j = 375; j < 425; j++) {
                        matriz[i][j].r = 250;
                        matriz[i][j].g = 250;
                        matriz[i][j].b = 250;
                    }
                } 
                    
                for (i = 110; i < 145; i++) {    
       
                    for (j = 395; j < 405; j++) {
                        matriz[i][j].r = 250;
                        matriz[i][j].g = 250;
                        matriz[i][j].b = 250;
                    }
                } 

            break;  
        }
}