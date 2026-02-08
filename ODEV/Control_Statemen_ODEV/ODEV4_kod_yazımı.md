Aşağıdaki C programında yorum satırı bulunan yere bir kod eklemeniz isteniyor:
````c
#include <stdio.h>

int main(void)
{
int x, y, z;

	printf("uc tamsayi giriniz: ");
	scanf("%d%d%d", &x, &y, &z);
	/* code  */

 int temp;

    if(x>y) {
        temp=x;
        x=y;
        y=temp;
    }

    if(x>z) {
        temp=x;
        x=z;
        z=temp;
    }

    if(y>z) {
        temp=y;
        y=z;
        z=temp;
    }

    printf("%d", x);

    if(x<y) {
        printf("<");
    }else {
        printf("=");
    }

    printf("%d", y);

    if(y<z) {
        printf("<");
    }else {
        printf("=");
    }

    printf("%d", z);
}
````

Yazdığınız kod çalıştırıldığında girilen sayıları ekrana şu formatta yazdırmalı:

````angular2html
girdi           çıktı
=====        ============
30 10 20     10 < 20 < 30
7 5 7        5 < 7 = 7
2 2 2        2 = 2 = 2
9 6 6        6 = 6 < 9
````

