/* hello.c
 * Escribir en archivo txt externo
 * Felipe Femenia
 * 20240401
*/


#include <stdio.h>

int main(){

    FILE *archivo;

    archivo = fopen("output.txt", "w");
    fprintf(archivo, "Hello, World!");

    return 0;
}