Bir tamsayı dizisi içinde en çok tekrar eden değeri (mod) hesaplayarak ekrana yazdıran bir C kodu yazınız.
Bu nitelikte birden fazla öğe varsa dizide ilk geçen değer bulunacak. Ekran çıktısı şu şekilde olmalı:

4 7 6 7 3 2 9 7 4 9 7 1

mod = 7 ve 4 kez tekrar ediyor

3 4 8 4 9 4 6 7 3 2 2 2

mod = 4 ve 3 kez tekrar ediyor

Aşağıdaki test kodunu kullanabilirsiniz:

````c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define     SIZE      1000

int main(void){
 int a[SIZE];
    int frekans[500] = {0};

    srand((unsigned)time(0));

    for (int i = 0; i < SIZE; ++i) {

        a[i] = rand() % 500;  // rand() % 500 0 ile 500 arasında random sayı üretir
        frekans[a[i]]++;

        if (i && i % 20 == 0)
            printf("\n");
        printf("%3d ", a[i]);
    }

    int mod = -1;
    int tekrardegeri = 0;

    for (int i= 0; i<500; i++) {
        if(frekans[i] > tekrardegeri) {
            tekrardegeri = frekans[i];
            mod = i;
        }
    }

    if(mod !=-1) {
        printf("mod = %d\n", mod);
        printf("ve %d kez tekrar ediyor\n", tekrardegeri);

    }
````
