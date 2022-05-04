#include<stdio.h>
#include<math.h>
float cTOf(float c) {
	float f = 0;
	f = c*9/5 + 32;
	return f;
}
float main() {
	float c = 0;
	printf("¼·¾¾¿Âµµ ÀÔ·Â : ");
	scanf("%f",& c);
	printf("%.0f", floor(cTOf(c)));
}