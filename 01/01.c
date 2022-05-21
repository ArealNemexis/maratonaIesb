#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pause()
{
    char pause;
    scanf("%c", &pause);
}

int main(int argc, char const *argv[])
{
    int v[10];

    for (int i = 0; i < 10; i++)
        printf("%d ", v[i]);

    pause();

    for (int i = 0; i < 10; i++)
        v[i] = i;
    for (int i = 0; i < 10; i++)
        printf("%d ", v[i]);

    printf("\n");

    pause();

    int m[10][10];

    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            m[i][j] = i + j;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}
