#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, sum, n;
    int qtd_leds[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    char numero[102];

    scanf("%d", &n);

    while (n--)
    {
        scanf("%s", numero);

        sum = 0;
        for (i = 0; numero[i] != '\0'; i++)
        {
            sum += qtd_leds[numero[i] - 48];
        }

        printf("%d leds\n", sum);
    }

    return 0;
}
