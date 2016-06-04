#include "diskr.h"//asd

float diskr(int a, int b, int c)
{
	float d = b * b - 4 * a * c;
	if (d < 0) {
		return -1;
	}
	return d;
}


