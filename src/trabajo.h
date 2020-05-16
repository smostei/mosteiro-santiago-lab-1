#include "fecha.h"
#include "servicio.h"
#include "mascota.h"


#ifndef TRABAJO_H_
#define TRABAJO_H_

typedef struct {
    int id; //comienza en 0, es autoincremental
    int idMascota;
    int idServicio;
    sFecha fecha;
    int isEmpty;
} sTrabajo;

#endif /* TRABAJO_H_ */


void initTrabajos(sTrabajo* trabajos, int longTrabajos);


int altaTrabajo(sTrabajo* trabajos, int longTrabajos, int proximoId, sMascota* mascotas, int longMascotas, sServicio* servicios, int longServicios);


void listarTrabajos(sTrabajo* trabajos, int longTrabajos);


int buscarLibreTrabajos(sTrabajo* trabajos, int longTrabajos);


void mostrarTrabajo(sTrabajo trabajo);


void mostrarTrabajos(sTrabajo* trabajos, int longTrabajos);
