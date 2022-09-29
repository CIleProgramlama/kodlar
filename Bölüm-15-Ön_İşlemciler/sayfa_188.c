#include <stdio.h>

int main(void)
{
	printf("Derleme başlangıç zamanı: %s\n", __TIME__);
	printf("Dosya ismi: %s\n", __FILE__);
	printf("Bu satırın numarası: %d\n", __LINE__);
	printf("Sistem Tarihi: %s\n", __DATE__);
	return 0;
}