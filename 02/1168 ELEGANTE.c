#include <stdio.h>

int main()
{
  char buff[100];
  int leds[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
  int i, sum, n;

  scanf("%d", &n);

  while (n--)
  {
    scanf("%s", buff);

    for (i = 0, sum = 0; buff[i] != '\0'; i++)
      sum += leds[(int)buff[i] - 48];

    printf("%d leds\n", sum);
  }

  return 0;
}