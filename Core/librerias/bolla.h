#ifndef BOLLA_H
#define BOLLA_H

#include <stdint.h>
#include "main.h"

void detener(void);
void arriba(uint16_t tiempo);
void abajo(uint16_t tiempo);
void giro_derecha(uint16_t tiempo);
void giro_izquierda(uint16_t tiempo);

#endif /* BOLLA_H */