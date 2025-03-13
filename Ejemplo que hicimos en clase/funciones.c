#include <stdio.h>

int suma(int x, int y){
return x + y;
}

int main(){

int x = 10, y= 20, resultado = 0;

suma(x, y, resultado);

printf("%d", resultado);
return 0;
}
