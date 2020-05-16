#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "trabajo.h"
#include "mascota.h"
#include "servicio.h"

void initTrabajos(sTrabajo* trabajos, int longTrabajos) {
    for(int i = 0; i < longTrabajos; i++) {
        trabajos[i].isEmpty = 1;
    }
}

int altaTrabajo(sTrabajo* trabajos, int longTrabajos, int proximoId, sMascota* mascotas, int longMascotas, sServicio* servicios, int longServicios) {
	int retorno = 0;

 	sTrabajo trabajo;
    int lugarLibre = buscarLibre(mascotas, longMascotas);

    if(lugarLibre != -1) {
            trabajo.id = proximoId;

            printf("Ingrese el ID de la mascota: \n");
            mostrarMascotas(mascotas, longMascotas);
            scanf("%d", &trabajo.idMascota);

            printf("Ingrese el ID del servicio: \n");
            listarServicios(servicios, longServicios);
            scanf("%d", &trabajo.idServicio);

            printf("Ingrese la fecha: dd/mm/aaaa\n");
            scanf("%d/%d/%d", &trabajo.fecha.dia, &trabajo.fecha.mes, &trabajo.fecha.anio);

            trabajo.isEmpty = 0;

            trabajos[lugarLibre] = trabajo;

            retorno = 1;

        } else printf("Los trabajos estan completos!\n\n");

    return retorno;
}

int buscarLibreTrabajos(sTrabajo* trabajos, int longTrabajos) {
    int indice = -1;

    for(int i = 0; i < longTrabajos; i++) {
        if(trabajos[i].isEmpty) {
            indice = i;
            break;
        }
    }

    return indice;
}

void mostrarTrabajo(sTrabajo trabajo) {
	printf("%d     %10s     %10s      %10s     %d\n", trabajo.id, trabajo.idMascota, trabajo.idServicio, trabajo.fecha.dia, trabajo.fecha.mes, trabajo.fecha.anio);
}


void mostrarTrabajos(sTrabajo* trabajos, int longTrabajos) {
    printf("\n------Lista de trabajos--------\n\n");

	printf("ID           ID Mascota          ID Servicio         Fecha\n\n");

    int flag = 0;

    for(int i = 0; i < longTrabajos; i++) {
    	if(!trabajos[i].isEmpty) {
    		mostrarTrabajo(trabajos[i]);
            flag = 1;
        }
    }

    if(!flag) printf("\nNo hay trabajos para mostrar\n");
}
