#### Soru 2
Aşağıdaki C kodlarında kullanlan if deyimlerindeki hataları açıklayınız:

```c

//////////////////////////////////////////////////////////////////////////////////////
int func(void);
void bar(int);

int main(void)
{
int x = func();

	if (10 < x < 20)
		bar(x);
}
10<X KOŞULUNUN TRUE VEYA FALSE OLMASINI <20 İLE KARŞILAŞTIRIR. OLMASI GEREKEN (X>10 && X<20)
//////////////////////////////////////////////////////////////////////////////////////
int func(void);
void bar(int);

int main(void)
{
int x = func();

	if (x != 7  || x != 23)
		bar(x);
}
SONUÇ HER ZAMAN DOGRU ÇIKAR. OLMASI GEREKEN || YERİNE && YAZILMALI.
```
