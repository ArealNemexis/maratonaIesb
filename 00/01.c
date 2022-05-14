#include <stdio.h>
#include <limits.h>
int main(int argc, char const *argv[])
{

    printf("sizeof int %ld\n", sizeof(int));
    printf("int max %d\n", INT_MAX);
    printf("int min %d\n", INT_MIN);

    printf("\n\n\n");

    printf("sizeof long int %ld\n", sizeof(long int));
    printf("long int max %ld\n", LONG_MAX);
    printf("long int min %ld\n", LONG_MIN);

    printf("\n\n\n");

    printf("sizeof long long int %ld\n", sizeof(long long int));
    printf("long long int max %lld\n", LLONG_MAX);
    printf("long long int min %lld\n", LLONG_MIN);


    printf("\n\n\n");

    printf("sizeof float %ld\n", sizeof(float));
    printf("positive float %f\n", 0.3);
    printf("negative float %f\n", -0.3);

    printf("\n\n\n");

    printf("sizeof double %ld\n", sizeof(double));
    printf("positive double %lf\n", 0.3);
    printf("negative double %lf\n", -0.3);

    printf("\n\n\n");

    printf("sizeof long double %ld\n", sizeof(long double));
    printf("positive long double %Lf\n", (long double)0.3);
    printf("negative long double %Lf\n", (long double)-0.3);


    printf("\n\n\n");

    printf("sizeof char %ld\n", sizeof(char));
    printf("char %c\n", 'a');
    printf("char %c\n", (char)97);


    printf("\n\n\n");

    printf("sizeof char array || string %ld\n", sizeof(char)*5);
    printf("char %s\n", "abcd");
    printf("char %ld\n", sizeof("abcd"));
    return 0;
}
