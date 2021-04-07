#include <stdio.h>
#include<stdbool.h> // Para utilñizar booleans 

int main()
{
    int menuOption;
    bool entroMenu=true;
    float resultadoOperacion, v1, v2;
     do
     {

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

        if (menuOption != 5)
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
             break;
        case 2: //Resta
            resultadoOperacion = v1 - v2;
             break;
        case 3://Multiplicación 
           resultadoOperacion = v1 * v2;
            break;
        case 4: //Division
            resultadoOperacion = v1 - v2;
             break;
        case 5: //Convercion Celcius
            resultadoOperacion = v1 - v2;
             printf("Digite el valor a converir a Farebhit \n");
            scanf("\n %f", v1);
             break;
        default:
            printf("NO RE CONOZCO ESA FUNCION");
            entroMenu=false;            
            break;
        }
        if(entroMenu)
        printf("\n El resultado de la operacion es : %.1f \n" , resultadoOperacion);
        printf("\n___________________\n");

     } while (menuOption != 0);

    return 0;
}