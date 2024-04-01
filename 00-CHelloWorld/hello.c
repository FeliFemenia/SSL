#include <stdio.h>

int main(){

    FILE *archivo;

    archivo = fopen("output.txt", "w");
    fprintf(archivo, "Hello, World!");

    return 0;
}