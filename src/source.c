#include "header.h"

void delay_ms(int d) { 
	for (int i=0; i < (d * 600000); i++);
}