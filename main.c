#include <stdio.h>

int x1 = 10;
int x2 =  20;

int main(void)
{
    int x3 = x1 + x2;
    printf("x3 = %d\n", x3);
}




/*
geçerli bildirimler nelerdir   ?
int main(void)
{
    signed x1;
    unsigned double x2;
    long int long x3;
    bool x4;
    char int x5;
    x6 float;
    long double x7;
    unsigned short int x8;
    long unsigned x9;
    long float x10;
}

int main(void)
{
    int _6542;
    unsigned check;
    long long_distance;
    int 4thvalue;
    short too_short;
    signed binary;
    int register;
    double BURGER;
    int int_x;
}

Aşağıdaki cümlelerin doğru ya da yanlış olduğunu yazınız:

Otomatik ömürlü nesnelerin çöp değerleri (garbage value) ile kullanılması tanımsız davranıştır.

Tam sayı ve gerçek sayı türlerinden statik ömürlü değişkenler ilk değer verilmeden tanımlansalar dahi hayata 0 değeri ile başlarlar.

long long türü en az 4 byte olmak zorundadır.

char türünün işaretli ya da işaretsiz olması derleyiciye bağlıdır (implementation defined)

işaretli tamsayı türlerinde taşma tanımsız davranıştır (undefined behavior).

işaretsiz tamsayı türlerinde taşma tanımsız davranıştır (undefined behavior).

int x; biçiminde bildirilen x değişkeni işaretli int türündendir.

long türünden bir değişken int türünden bir değişkene göre daha büyük tam sayıları tutabilir.

signed x; biçiminde bildirilen x değişkeni işaretli char türündendir.


Aşağıdaki bildirimlerden geçersiz olanları işaretleyiniz:



int x1 = 10;
int x2 = x1 + 20;

int main(void)
{
    int x3 = x1 + x2;
    static int x = x3;
}


 */