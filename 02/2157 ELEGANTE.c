#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n, inicio, fim;
    char palavrinha[6];
    scanf("%d", &n);

    while (n--)
    {
        scanf("%d %d", &inicio, &fim);
        for (int i = inicio; i <= fim; i++)
        {
            printf("%d", i);
        }

        for (int i = fim; i >= inicio; i--)
        {
            int k = i;
            do
            {
                printf("%d", k % 10);
                k /= 10;
            } while (k > 0);
        }
        printf("\n");
    }
    return 0;
}