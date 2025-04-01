#include <stdio.h>
#define MIN 2015

struct
{
    int velocidad;
    int anio;
    int cantidad_nucleos;
    char *tipo_cpu;
} typedef compu;
void listaPC(compu* compus);
void pcVieja(compu* compus);
void pcMasterRaise(compu* compus);


int main(){
    srand(time(NULL));
    int cantidad = 5;
    char tipos[6][10] = {"intel","AMD","Celeron","Athlon", "Core","Pentium"};
    compu compus[cantidad];
    for (int i = 0; i < cantidad; i++)
    {
        compus[i].anio =rand() % 9 + 1 + MIN;
        compus[i].cantidad_nucleos = rand() % 8 + 1;
        compus[i].velocidad= (rand() % 3) + 1;
        int numA = rand() % 6;
        compus[i].tipo_cpu=tipos[numA];
    }
    listarPCs(compus , cantidad);
    mostrarMasVieja(compus, cantidad);
    mostrarMasVeloz(compus, cantidad);
}
void listaPC(compu* compus, int cantidad){
    printf("Lista de pc: \n");
    for (int i = 0; i < cantidad; i++)
    {
        printf("----PC N°%d---\n",i +1);
        printf("Velocidad : %d \n" ,compus[i].velocidad);
        printf("Año : %d \n" ,compus[i].anio);
        printf("Cantidad de nucleos : %d \n" ,compus[i].cantidad_nucleos);
        printf("Tipo de Cpu: %s\n", compus[i].tipo_cpu);
    }
    

};
void pcVieja(compu* compus, int cantidad){
    int indicePcVieja = 0;
    for (int i = 0; i < cantidad; i++)
    {
        if(compus[i].anio < compus[indicePcVieja].anio){
            indicePcVieja = i;
        }
    }
    printf("La PC más vieja es la número %d:\n", indicePcVieja + 1);
    printf("Año: %d\n", compus[indicePcVieja].anio);
    printf("Velocidad: %d GHz\n", compus[indicePcVieja].velocidad);
    printf("Cantidad: %d\n", compus[indicePcVieja].cantidad_nucleos);
    printf("Tipo de CPU: %s\n", compus[indicePcVieja].tipo_cpu);
    

};
void pcMasterRaise(compu* compus, int cantidad){
 int indicePcMaster = 0;
    for (int i = 0; i < cantidad; i++)
    {
        if(compus[i].velocidad > compus[indicePcMaster].velocidad){
            indicePcMaster = i;
        }
    }
    printf("La PC más rapida es la número %d:\n", indicePcMaster + 1);
    printf("Año: %d\n", compus[indicePcMaster].anio);
    printf("Velocidad: %d GHz\n", compus[indicePcMaster].velocidad);
    printf("Cantidad: %d\n", compus[indicePcMaster].cantidad_nucleos);
    printf("Tipo de CPU: %s\n", compus[indicePcMaster].tipo_cpu);
};