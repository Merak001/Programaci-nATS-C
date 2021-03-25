//Tipos de datos en c

#include <stdio.h>

/*  
    Todas van con %c  o  %i
    c para imprimir caracteres
    i para imprimir enteros
    -- %b boleanos
    f flotantes
    li long integer
    lf long float
*/
int main(){
    char a = 'e'; //De tipo de caracter    TAMAÑO -> 1 BIT 0-255
    short b= -15.0; //tamaño 2 bits  108 - 127
    int c= 3245; //tamaño en bites rango -32768 -- 32767
    unsigned int d= -1278; // Solo acepta valores positivos El tamaño en bits es de 0-> 65535
    long e = 123456; // tamaño en bites  4 / Rango -214783648.....
    float f = 12.454877; //tamaño en bite 4 rango
    double g = 12654789765498746532.316546; //

    printf("El elemento dentro de la varia  a  es: %c \n", a);
    printf("El elemento dentro de la varia  b  es: %i \n", b);
    printf("El elemento dentro de la varia  c  es: %i \n", c);
    printf("El elemento dentro de la varia  c  es: %2i \n", c);
    printf("El elemento dentro de la varia  d  es: %i \n", d);
    printf("El elemento dentro de la varia  e  es: %li \n", e);
    printf("El elemento dentro de la varia  f  es: %f \n", f);
    //.2 Par acotar el numero de posiciones a mostrar
    printf("El elemento dentro de la varia  f  es: %.2f \n", f);
    printf("El elemento dentro de la varia  g  es: %lf \n", g);
    //con el "." punto se eliminan todos los decimlales
    printf("El elemento dentro de la varia  g  es: %.lf \n", g);
    return 0;
}

