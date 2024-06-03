#include <stdio.h>

int main() {
    int opcion;
    float lado, base, altura, radio, area;

    printf("Seleccione la figura para calcular el area:\n");
    printf("1. Cuadrado\n");
    printf("2. Triangulo\n");
    printf("3. Circulo\n");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("Ingrese la longitud del lado del cuadrado: ");
            scanf("%f", &lado);
            area = lado * lado;
            printf("El area del cuadrado es: %.2f\n", area);
            break;
        case 2:
            printf("Ingrese la base del triangulo: ");
            scanf("%f", &base);
            printf("Ingrese la altura del triangulo: ");
            scanf("%f", &altura);
            area = (base * altura) / 2;
            printf("El area del triangulo es: %.2f\n", area);
            break;
        case 3:
            printf("Ingrese el radio del circulo: ");
            scanf("%f", &radio);
            area = 3.14159 * radio * radio;
            printf("El area del circulo es: %.2f\n", area);
            break;
        default:
            printf("Opcion no valida.\n");
    }

    return 0;
}
