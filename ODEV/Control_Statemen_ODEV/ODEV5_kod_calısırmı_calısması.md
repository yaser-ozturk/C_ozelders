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

