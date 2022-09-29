#include <stdio.h>
#define PI 3.1415
#define YAZDIR printf
int main(void)
{
	int r = 10;
	float dairenin_cevresi = 2*PI*r;
	#ifdef PI
	YAZDIR("1-Yarıçapı %d birim olan Dairenin Çevresi= %f birimdir.\n", r, dairenin_cevresi);
	#endif
	#undef PI
	#ifndef PI
	#define PI 3
	dairenin_cevresi = 2*PI*r;
	YAZDIR("2-Yarıçapı %d birim olan Dairenin Çevresi= %f birimdir.\n", r, dairenin_cevresi);
	#endif
	return 0;
}