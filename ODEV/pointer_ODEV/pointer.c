//
// Created by User on 14.02.2026.
//

Aşağıdaki deyimlerin C dilinde geçerli olup olmadığını yazınız. Her bir sentaks hatasının nedenini açıklayınız:
int main(void)
{
    int a[] = { 1, 3, 5 };
    int b[] = { 2, 4, 6 };
    int* p = a;

    a = b;
    ++a;
    p = b;
    *p = *a;
    *a = *b;
    ++* a;
    ++* p;
    (*p)++;
    a = p;
}

Aşağıdaki deyimlerin C dilinde geçerli olup olmadığını yazınız. Her bir sentaks hatasının nedenini açıklayınız:
int main(void)
{
    int x = 10;
    int y = 10;
    int* p = &x;
    int* q = &y;

    &x = &y;
    x = *p;
    *p = *q;
    p = &y;
    p = q;
    &x++;
    ++* p;
    &++x;
    &y = p;
}



