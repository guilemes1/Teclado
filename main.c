/*
 * File:   main.c
 * Author: 20185189
 *
 * Created on 5 de Maio de 2021, 13:56
 */

#include "config.h"
#include <xc.h>
#include "delay.h"
#include "dispLCD4vias.h"
#include "teclado.h"

void main(void) 
{
    char str[] = "Tecla:         ";
    dispLCD_init();
    teclado_init();
    
    

    while(1)
    {
        
        str[9] = teclado();
        
        if(str[9] == 0)
           str[9] = ' ';
        
        dispLCD(0,0, " WELCOME JUNGLE " );
        dispLCD(1,0,str);
    }
}
