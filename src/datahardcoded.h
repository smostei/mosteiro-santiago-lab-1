#ifndef DATAHARDCODED_H_
#define DATAHARDCODED_H_

#endif /* DATAHARDCODED_H_ */

#define TAM 5
#define TAM_DESCRIPCION 20
#define TAM_SERVICIOS 3
#define TAM_DESCRIPCION_SERVICIOS 25

//Tipos
int idsTipos[TAM] = {1000, 1001, 1002, 1003, 1004};
char descripcionTipos[TAM][TAM_DESCRIPCION] = {"Ave", "Perro", "Gato", "Roedor", "Pez"};

//Colores
int idsColores[TAM] = {5000, 5001, 5002, 5003, 5004};
char nombreColores[TAM][TAM_DESCRIPCION] = {"Negro", "Blanco", "Gris", "Rojo", "Azul"};

//Servicios
int idsServicios[TAM_SERVICIOS] = {20000, 20001, 20002};
char descripcionServicios[TAM_SERVICIOS][TAM_DESCRIPCION_SERVICIOS] = {"Corte", "Desparasitado", "Castrado"};
float precios[] = {250, 300, 400};
