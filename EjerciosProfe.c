#include <stdio.h>
#include<stdbool.h> // Para utilñizar booleans 

int main()
{
    int menuOption;
    
    float resultadoOperacion, v1, v2;
     do
     {
        bool entroMenu=false;
        printf("Bienvenido a la caluladora de Tejeda \n");
        printf("Que es lo que decea hacer:  \n");
        printf("Sumar (1):  \n");
        printf("Restar (2):  \n");
        printf("Multiplicar (3):  \n");
        printf("Dividir (4): \n");
        printf("Celcius a Farenhit (5) \n");
        printf("Salir (0) \n");
        scanf("%i",&menuOption);
        printf("Usted selecciono la opcion: %i \n", menuOption);

        if (menuOption != 5&& menuOption !=0 )
        {
            printf("Digite el valor 1: \n");
            scanf("\n %f", &v1);
            printf("Digite el valor 2: \n");
            scanf("\n %f", &v2);
        }
        printf("\n menu option: %i",menuOption);
        switch (menuOption)
        {
        case 1: //suma
            resultadoOperacion = v1 + v2;
            entroMenu=true;
             break;
        case 2: //Resta
            resultadoOperacion = v1 - v2;
            entroMenu=true;
             break;
        case 3://Multiplicación 
           resultadoOperacion = v1 * v2;
           entroMenu=true;
            break;
        case 4: //Division
            resultadoOperacion = v1 - v2;
            entroMenu=true;
             break;
        case 5: //Convercion Celcius
            printf("\n Digite el valor a converir a Farebhit \n");
            scanf("\n %f", &v1);
            printf("\n valor a coverir: %f", v1);
            resultadoOperacion = (v1*1.8)+32;
            entroMenu=true;
            break;
        case 0: //Salir
             printf("\n Graicas por utilizar la calculadora chau! \n");
             break;             
        default:
            printf("\n NO RE CONOZCO ESA FUNCION");
            entroMenu=false;            
            break;
        }
        if(entroMenu)
        printf("\n El resultado de la operacion es : %.1f " , resultadoOperacion);
        printf("grados Fahrenheit");
        printf("\n___________________\n");

     } while (menuOption != 0);

    return 0;
}