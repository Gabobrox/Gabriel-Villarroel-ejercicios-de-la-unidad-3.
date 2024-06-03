#include <stdio.h>
int main() {
    int num1, num2, num3, num4, mayor;

    
    printf("Ingrese el primer numero : ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero : ");
    scanf("%d", &num2);
    printf("Ingrese el tercer numero : ");
    scanf("%d", &num3);
    printf("Ingrese el cuarto numero : ");
    scanf("%d", &num4);

    mayor = num1;
    if (num2 > mayor) {
        mayor = num2;
    }
    if (num3 > mayor) {
        mayor = num3;
    }
    if (num4 > mayor) {
        mayor = num4;
    }

    printf("El mayor de los cuatro numeros es: %d", mayor);

    return 0;
}
