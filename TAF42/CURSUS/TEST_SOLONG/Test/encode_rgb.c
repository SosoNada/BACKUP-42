#include <stdint.h>
#include <stdio.h>

int encode_rgb(uint8_t red, uint8_t green, uint8_t blue) {
	return (red << 16 | green << 8 | blue);
}

int main() {
	uint8_t red = 255;
	uint8_t green = 128;
	uint8_t blue = 64;

	int encodedColor = encode_rgb(red, green, blue);

	printf("Composant RGB : R=%u, G=%u, B=%u\n", red, green, blue);
	printf("Valeur encodee = %d\n", encodedColor);

	return 0;
}
