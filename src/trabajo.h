#include "fecha.h"

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
