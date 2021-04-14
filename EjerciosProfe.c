#include <stdio.h>
#include <stdbool.h> // Para utilñizar booleans

int main()
{
    int menuOption;

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
        printf("Calcular hipotenusa de triangulo a partir de dos catetos (6) \n");
        printf("Calcular área de un circulo (7) \n");
        printf("Calcular área de un de trapecio (8) \n");
        printf("Salir (0) \n");
        scanf("%i", &menuOption);
        printf("Usted selecciono la opcion: %i \n", menuOption);

        if (menuOption != 5 && menuOption != 0 && menuOption != 6 && menuOption != 7 && menuOption != 8)
        {
            printf("Digite el valor 1: \n");
            scanf("\n %f", &v1);
            printf("Digite el valor 2: \n");
            scanf("\n %f", &v2);
        }
        printf("\n menu option: %i", menuOption);
        switch (menuOption)
        {
#pragma region "Operaciones basicas"
        case 1: //suma
            resultadoOperacion = v1 + v2;
            printf("\n El resultado de la operacion es : %.1f ", resultadoOperacion);
            break;
        case 2: //Resta
            resultadoOperacion = v1 - v2;
            printf("\n El resultado de la operacion es : %.1f ", resultadoOperacion);
            break;
        case 3: //Multiplicación
            resultadoOperacion = v1 * v2;
            printf("\n El resultado de la operacion es : %.1f ", resultadoOperacion);
            break;
        case 4: //Division
            resultadoOperacion = v1 - v2;
            printf("\n El resultado de la operacion es : %.1f ", resultadoOperacion);
            break;
#pragma endregion
        case 5: //Convercion Celcius
            printf("\n Digite el valor a converir a Farebhit \n");
            scanf("\n %f", &v1);
            resultadoOperacion = (v1 * 1.8) + 32;
            printf("\n El resultado de la operacion es : %.1f ", resultadoOperacion);
            printf("grados Fahrenheit");

            break;
        case 6: //Sacar la hipotenusa de un traigulo pideindo al usuario dos catetos
            printf("\n Digite el valor de los dos catetos \n");
            scanf("\n %f %f", &v1, &v2); // Sirve para leer dos valores con un mismo Scanf
            resultadoOperacion = sqrt((pow(v1, 2)) + pow(v2, 2));
            printf("\n El resultado de la operacion es : %.1f ", resultadoOperacion);
            break;
        case 7: //Calcular longtitud circunferencía
            printf("\n Digite el valor del radio \n");
            scanf("\n %f", &v1);
            resultadoOperacion = 3.1416 * pow(v1, 2); // pi x radio al cuadrador
            printf("\n El el área del circulo es de: %.1f ", resultadoOperacion);
            break;
        case 8: ;//Calcular área de trapecios   -> Se agrega punto y coma para cerrar la etiqueta y se pueda declar
        //una nueva variable   "float altura"
            float altura;
            printf("\n Digite la base mayor \n");
            scanf("\n %f", &v1);
            printf("\n Digite la base menor \n");
            scanf("\n %f", &v2);
            printf("Digite la altura \n");
            scanf("%f", &altura);
            resultadoOperacion = ((v1 + v2) * altura) / 2; // area1 + area2 x por altura entre 2
            printf("\n El el área del trapecio es de: %.1f ", resultadoOperacion);
            break;
            
        case 0: //Salir
            printf("\n Graicas por utilizar la calculadora chau! \n");
            break;
        default:
            printf("\n NO RE CONOZCO ESA FUNCION");
            break;
        }
        printf("\n___________________\n");

    } while (menuOption != 0);

    return 0;
    //Espacios para agregar la nueva rama de Windows
}