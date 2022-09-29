#include <stdio.h>
#define PI 3.1415
#define YAZDIR printf
int main(void)
{
	int r = 10;
	float dairenin_cevresi = 2*PI*r;
	#ifdef PI
	YAZDIR("Yarıçapı %d birim olan Dairenin Çevresi= %f birimdir.\n", r, dairenin_cevresi);
	#endif
	#undef PI
	#ifdef PI
	dairenin_cevresi = 2*PI*r;
	YAZDIR("Yarıçapı %d birim olan Dairenin Çevresi= %f birimdir.\n", r, dairenin_cevresi);
	#endif
	return 0;
}