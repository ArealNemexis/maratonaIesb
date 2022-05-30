#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    char entrada[14];
    int saida[3];

    scanf("%d", &n);
    while (n--)
    {
        scanf("%s", entrada);
        saida[0] = ((entrada[2] - '0') * 10) + entrada[3] - '0';
        saida[1] = ((entrada[5] - '0') * 100) + ((entrada[6] - '0') * 10) + (entrada[7] - '0');
        saida[2] = ((entrada[11] - '0') * 10) + entrada[12] - '0';

        printf("%d\n", saida[0] + saida[1] + saida[2]);
    }
    return 0;
}
