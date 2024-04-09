#include <stdio.h>
#define N 5

struct Pc{
    int velocidad;
    int anio;
    int cantidad;
    char * tipo_cpu;

}typedef Pc;

int main(){
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    Pc computadoras[N];
    computadoras.tipo_cpu = tipos[0];
    for(int i = 0; i < N; i++){
        computadoras[i].velocidad = rand() % 3 + 1;
        computadoras[i].anio = rand() % 2015 + 2023;
        computadoras[i].cantidad = rand() % 8 + 1;

    }
    for(int i = 0; i < N; i++){
        printf("-----COMPUTADORA [%d]-----\n", i + 1);
        printf("Velocidad de procesamiento en GHZ: %d\n", computadoras[i].velocidad);
        printf("Anio: %d\n", computadoras[i].anio);
        printf("Canidad de nucleos %d\n", computadoras[i].cantidad);

    }





    return 0;
}

