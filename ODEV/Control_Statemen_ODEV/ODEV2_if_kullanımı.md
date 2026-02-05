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

//////////////////////////////////////////////////////////////////////////////////////
int func(void);
void bar(int);

int main(void)
{
int x = func();

	if (x != 7  || x != 23)
		bar(x);
}
```