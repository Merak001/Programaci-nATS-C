#include<stdio.h>
int main(){
    int a=0;
    float b;
    char c;
    char x[50];
    printf("Digita tu nombre: ");
    //scanf("%s",x); //Le las entradas de datos pero se tetiene al encontrar un carcater en blanco 
    gets(x);//Le toda la cadena incluso espacios en blanco
    printf("tu nombre es: %s",x);
    

/*
    printf("digite el valor de la variable a \n");
    scanf("%i",&a);
    printf("\n El valor de la variable a es, %i", a);
//**
    printf("\n---------------------\n");
    printf("digite el valor de la variable b \n");
    scanf("%f",&b);
    printf("\n El valor de la variable b es, %f", b);

    //**
    printf("\n---------------------\n");
    printf("digite el valor de la variable c \n");
    scanf("%c",&c);
    printf("\n El valor de la variable c es, %c", c);
    */


    return 0;
}