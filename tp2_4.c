#include <stdio.h>
#define MIN 2015

struct
{
    int velocidad;
    int anio;
    int cantidad_nucleos;
    char *tipo_cpu;
} typedef compu;
void listarPCs(struct compu pcs[], int cantidad);
void mostrarMasVieja(struct compu pcs[], int cantidad);
void mostrarMasVeloz(struct compu pcs[], int cantidad);


int main(){
    srand(time(NULL));
    char tipos[6][10] = {"intel","AMD","Celeron","Athlon", "Core","Pentium"};
    compu compus[5];
    for (int i = 0; i < 5; i++)
    {
        compus[i].anio =rand() % 9 + 1 + MIN;
        compus[i].cantidad_nucleos = rand() % 8 + 1;
        compus[i].velocidad= (rand() % 3) + 1;
        int numA = rand() % 6;
        compus[i].tipo_cpu=tipos[numA];
    }
}
void listarPCs(struct compu pcs[], int cantidad){

};
void mostrarMasVieja(struct compu pcs[], int cantidad){

};
void mostrarMasVeloz(struct compu pcs[], int cantidad){

};