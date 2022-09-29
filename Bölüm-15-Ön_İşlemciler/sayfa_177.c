#include <stdio.h>
#define PI 3.1415
#define YAZDIR printf
#define DAIRE_ALANI(r) (PI * r * r)
int main(void)
{
	int r = 10;
	float dairenin_cevresi = 2*PI*r;
	YAZDIR("Yarıçapı %d birim olan Dairenin Çevresi= %f birimdir.\n", r, dairenin_cevresi);
	#undef PI
	YAZDIR("Yarıçapı %d birim olan Dairenin Alanı= %f birimdir.\n", r, DAIRE_ALANI(r));
	return 0;
}