#include <stdio.h>

int main() {
    printf("¡Bienvenido!\n");
    printf("Por favor, introduce tu nombre: ");
    
    char nombre[50];
    scanf("%s", nombre);
    
    printf("Hola, %s. ¡Es un placer conocerte!\n", nombre);
    
    return 0;
}
