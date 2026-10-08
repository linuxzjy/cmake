#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    printf("(a<b)||(a==b)=%d\n", (a < b) || (a == b));
    printf("!(a==10) %d\n", !(a == 10));
    return 0;
}
