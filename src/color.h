#ifndef COLOR_H_
#define COLOR_H_

typedef struct {
	int id; //comienza en 5000
	char nombreColor[20];
} sColor;

#endif /* COLOR_H_ */

void listarColores(sColor* colores, int longColores);
