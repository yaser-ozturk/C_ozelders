//
// Created by User on 14.02.2026.
//

Aşağıdaki deyimlerin C dilinde geçerli olup olmadığını yazınız. Her bir sentaks hatasının nedenini açıklayınız:
int main(void)
{
    int a[] = { 1, 3, 5 };  geçerli
    int b[] = { 2, 4, 6 };  geçerli
    int* p = a; geçerli

    a = b; geçersiz (diziler bu şekilde birbirine eşitlenemez)
    ++a; geçersiz(dizi bu şekilde arttırılamaz)
    p = b; geçerli
    *p = *a; geçerli
    *a = *b; geçerli
    ++* a; geçerli
    ++* p; geçerli
    (*p)++; geçerli
    a = p; geçersiz
}

Aşağıdaki deyimlerin C dilinde geçerli olup olmadığını yazınız. Her bir sentaks hatasının nedenini açıklayınız:
int main(void)
{
    int x = 10; geçerli
    int y = 10; geçerli
    int* p = &x; geçerli
    int* q = &y; geçerli

    &x = &y; geçersiz( 2 tane rvalue eşitlenemez)
    x = *p; geçerli
    *p = *q; geçerli
    p = &y; geçerli
    p = q; geçerli
    &x++; geçersiz 
    ++* p; geçerli
    &++x; geçersiz 
    &y = p; geçersiz(r value)
}



