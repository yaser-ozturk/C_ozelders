#include <stdio.h>

int x1 = 10;
int x2 =  x1 + 20;

int main(void)
{
    int x3 = x1 + x2;
    static int x = x3;
    printf("x3 = %d\n", x3);
}

