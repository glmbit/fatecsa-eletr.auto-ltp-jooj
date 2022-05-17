#include <stdio.h>

int main()
{
int a, b, c;
    printf("Entre com os três valores:\n ");
        scanf("%d %d %d", &a, &b, &c);
    if (a > c) {
        int tmp = c;
        c = a;
        a = tmp;
    }
    if (a > b) {
        int tmp = b;
        b = a;
        a = tmp;
    }
    if (b > c) {
        int tmp = c;
        c = b;
        b = tmp;
    }
    printf("%d %d %d", a, b, c);
    
    return 0;
}
