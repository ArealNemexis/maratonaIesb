#include <stdio.h>

int main () {
    int n, b, e, i, aux;

    scanf("%d", &n);


    while (n--)
    {
        scanf("%d %d", &b, &e);

        for (i = b; i <= e; i++) 
            printf("%d", i);
        
        for (i = e; i >= b; i--) {
            aux = i;

            do {
                printf("%d", aux % 10);
                aux = aux / 10;
            } while(aux != 0);
        }
        printf("\n");
    }

    return 0;
}