#include <stdio.h>
#include <unistd.h>
#include <Windows.h>
#include <stdlib.h>
#include <string.h>
#include "../lib/series.h"

int getTerminosGenerar()
{
    int NroTer;
    int i;
    int CeId[TAMANIO];

    printf("Porfavor ingrese su numero de cedula: ");
    scanf("%i", CeId);
    if ( CeId[0] == MyCeId )
        printf("Estefano Proano");
    else
        exit (-1);
    while (NroTer % 2 == 0)
    {
        printf("\nIngrese el numero de terminos que quiere que desea generar (impar): ");
        scanf("%i", &NroTer);
    }
    return NroTer;
}


void main ()
{
    //printf("Hello World");
    system ("clear");
    int NroTer = getTerminosGenerar();
    serieImpar(NroTer);
    serie01(NroTer);
    serie03(NroTer);
    serie05(NroTer);
    serie07(NroTer);
    serie09(NroTer);
}