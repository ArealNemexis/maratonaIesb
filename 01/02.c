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
    char frase[] = {'g', 'o', 'l', 'z', 'i', 'n', '\0'};
    char frase2[] = "golzin";
    char *frase3;

    printf("frase = %s\n", frase);

    pause();

    printf("frase2 = %s\n", frase2);

    pause();

    printf("sizeof frase1 %lu\n", sizeof(frase) / sizeof(char));

    pause();

    printf("sizeof frase2 %lu\n", sizeof(frase2) / sizeof(char));

    pause();

    printf("strlen frase %lu\n", strlen(frase));

    pause();

    printf("strlen frase2 %lu\n", strlen(frase2));

    pause();

    char *frasenova = "golzin branco";
    frase3 = (char *)malloc(sizeof(char) * (strlen(frasenova) + 1));

    strcpy(frase3, "golzin branco");
    printf("apos malloc e strcpy frase3 = %s\n", frase3);

    printf("strlen frase3 %lu\n", strlen(frase3));
    printf("sizeof frase3 %lu\n", sizeof(frase3));


    pause();

    printf("sizeof frase3 %lu\n", sizeof(frase3) / sizeof(char));
    pause();

    printf("strcmp retorna 0 caso as strings forem iguais\n");
    printf("strcmp(frase3, 'golzin branco') =  %d\n", strcmp(frase3, "golzin branco"));

    pause();

    printf("strcmp retorna 1 caso as strings forem diferentes\n");
    printf("strcmp(frase3, 'golzin aabranco') =  %d\n", strcmp(frase3, "golzin aabranco"));

    return 0;
}
