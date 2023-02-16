#include <stdio.h>
#include <stdint.h>

void delay_ms(int d) { 
	for (int i=0; i < (d * 600000); i++);
}

int main(void) {
	
	while(1) {
		
		printf("Hello World!\n");
		delay_ms(500);
	}

	return 0;
}
