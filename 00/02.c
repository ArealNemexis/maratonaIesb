#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a = 2;
    int b = 3;
    int c = 4;

    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d int \n", a, b, a / b);
    printf("%d / %d = %f float \n", a, b, a / b);
    printf("%d / %d = %f float com cast \n", a, b, (float)a / (float)b);
    printf("%d %% %d = %d \n", c, b, c%b);

    return 0;
}
