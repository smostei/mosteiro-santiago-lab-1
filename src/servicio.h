#ifndef SERVICIO_H_
#define SERVICIO_H_

typedef struct {
	int id; //comienza en 20000
	char descripcion[25];
	float precio;
} sServicio;


#endif /* SERVICIO_H_ */


void listarServicios(sServicio* servicios, int longServicios);
