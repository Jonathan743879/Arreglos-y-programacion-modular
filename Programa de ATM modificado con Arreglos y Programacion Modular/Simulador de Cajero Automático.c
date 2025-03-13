#include <stdio.h>
#include <stdlib.h>
#include "atm.h"

int verificar(float X)//Funcion void que contiene una respuesta dependiendo del valor ingresado por el usuario
{
    if(X > 0)
    {
    printf("La cantidad ingresada es valida\n");
    if( X == 0)
        printf("La cantidad ingresada es 0\n");
     return 1;
    }else
    {
     printf("La cantidad ingresada es NEGATIVA\n");
     return 101;
    }
    return 0;
}

int main(){//Funcion principal

    int option;
    float amount;
    float balance[3] ={1000, 2000, 3000};
    int v;
    int pin;
    int intento = 3;
    int cuenta;

    printf("Seleccione una cuenta");
    printf("\n1. Cuenta 1\n");
    printf("2. Cuenta 2\n");
    printf("3. cuenta 3\n");
    printf("Seleccionar cuenta: ");
    scanf("%d", &cuenta);

    do{
    printf("\nIngrese su PIN: ");
    scanf("%d", &pin);

    if(pin == 1234 && intento > 0){

        do{

    printf("\nSeleccione una opcion");
    printf("\n1. Consultar Saldo\n");
    printf("2. Depositar Dinero\n");
    printf("3. Retirar dinero\n");
    printf("4. Salir del programa\n");
    printf("Seleccionar una opcion: ");
    scanf("%d", &option);

    switch(option){
    case 1: printf("\nSu saldo es %f\n", balance);
        break;
    case 2:
        printf("\nIngrese la cantidad a depositar: ");
        scanf("%f", &amount);
        v= verificar(amount);
        while(v != 1)
            {
            scanf("%f", &amount);
            v= verificar(amount);
        }
        balance= amount + balance;

        printf("\nSu nuevo saldo es %f", balance);

        break;
    case 3: printf("\nIngrese la cantidad a retirar: ", balance);
        scanf("%f", &amount);
        v= verificar(amount);
        while(v != 1)
            {
            scanf("%f", &amount);
            v= verificar(amount);
        }
        balance= balance - amount;

        printf("\nSu nuevo saldo es %f", balance);
        break;
}
}while(option != 4);
}
else{
     printf("\nEl PIN ingresado es incorrecto, intentelo de nuevo\n");
     intento --;
}
}while(intento > 0);
return 0;
}
