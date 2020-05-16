#include "tipo.h"
#include "color.h"

#ifndef MASCOTA_H_
#define MASCOTA_H_

typedef struct {
    int id; //Comienza en 0, es autoincremental
    char nombre[20];
    int idTipo;
    int idColor;
    int edad;
    int isEmpty;
} sMascota;

#endif /* MASCOTA_H_ */

void initMascotas(sMascota* mascotas, int longMascotas);


void mostrarMascota(sMascota mascota);


void mostrarMascotas(sMascota* mascotas, int longMascotas);


int altaMascota(sMascota* mascotas, int longMascotas, int proximoId, sTipo* tipos, sColor* colores, int longitud);


void modificarMascota(sMascota* mascotas, int longMascotas, sTipo* tipos, sColor* colores, int longitud);


void bajaMascota(sMascota* mascotas, int longMascotas, sTipo* tipos, sColor* colores, int longitud);


int buscarLibre(sMascota* mascotas, int longMascotas);


int buscarMascota(sMascota* mascotas, int id, int longMascotas);


void manejarModificacionMascota(sMascota* mascota, sTipo* tipos, int longTipos);


int hayMascotas(sMascota* mascotas, int longMascotas);


void ordenarMascotasPorTipoYNombre(sMascota* mascotas, int longMascotas);
