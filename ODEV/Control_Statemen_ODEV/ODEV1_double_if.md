#### Soru 1 Çıktı ne olur



````c
#include <stdio.h>

int main(void)
{
	double d = 0.;
	int i;

	for (i = 0; i < 10; i++)
		d += .1;

	if (d == 1.)
		printf("d, 1. degerinde\n");
	else
		printf("d, 1. degerinde degil\n");

	return 0;
}
KAYAN NOKTALARI SAYILARDA DEĞERLER TAM TUTMADIGI İÇİN ELSE BLOGU ÇALIŞIR VE  d,1.degerinde degil çıktısı alınır.
````
