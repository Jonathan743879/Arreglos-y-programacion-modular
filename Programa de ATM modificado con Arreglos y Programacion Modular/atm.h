#ifndef ATM_H_INCLUDED
#define ATM_H_INCLUDED

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

#endif // ATM_H_INCLUDED
