#ifndef TIPO_H_
#define TIPO_H_

typedef struct {
	int id; //comienza en 1000
	char descripcion[20];
} sTipo;


#endif /* TIPO_H_ */

void listarTipos(sTipo* tipos, int longitudTipos);
