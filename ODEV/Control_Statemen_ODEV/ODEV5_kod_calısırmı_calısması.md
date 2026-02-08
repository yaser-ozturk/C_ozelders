Aşağıdaki C programlarının çıktıları ne olur nedeni açıkla
Sorunun yanıtı şu seçeneklerden biri de olabilir:

- Sentaks hatası (syntax error)
- Tanımsız davranış (undefined behavior)
- Derleyiciye göre değişir. (implementation defined - implementation specified).

## 1
```c
#include <stdio.h>

int main()
{
	int i = 1;
	do
	{
		printf("%d\n", i);
		i++;
		if (i < 15)
			continue;
	} while (0);
}
````
// 1 yazar cunku i do döngüsüne 1 olarak girer ve 1 yazılır daha sonra değeri 1 arttırılır 2 olur. 2 <15 oldugu için continue komutu uygulanır ve do döngüsünden çıkılır.while döngüsüne gelinir.

## 2
```c
#include<stdio.h>

int main(void)
{
	int i, k;
	
	for (i = 1, k = 1; k; printf("%d%d", i, k))
		k = i++ <= 3;	
}
````
//donguye girildiğinde i=1 yani <=3 olmuş oluyor bu yuzden k true geldıgınden 1e eşit,i değeri 1 arttırılırdıgındada 2 oluyor.ilk dönguden 21 çıktısı alıyoruz. son cıktı 21314150 oluyor.

## 3
```c
#include <stdio.h>

int main(void)
{
	int x = 1;

	while (x-- >= 1)
		while (x-- >= 0);
			printf("%d", x);
}
````
// önce dış while döngüsünden x=0 olarak çıkar ve iç while döngüne girip -1 olarak çıkar.tekrardan iç while döngüsüne -1 olarak girer -1>=0 olmadıgından sonuc false cıksada x 1 azaltılır ve -2 olur daha sonra dış while dongusune gider ve ordada aynı durum yaşanır. sonuc olarak -3 çıktısı alırız.

## 4
```c
#include<stdio.h>

int main(void)
{
    int x = 1;
    switch (x)
    {
    case '1': printf("1\n"); break;
    case '2': printf("2\n"); break;
    defualt : printf("0\n");
    }
}
````
// '1' yerine 1 yazılsaydı cıktıyı 1 olarak alırdık. şu an cıktı alamıyoruz.


