#include <stdio.h>

void main()
{
  int i, num, temp = 0;
  printf("enter a number:");
  scanf("%i", &num);

  for (i = 2; i <= num / 2; i++)

    if (num % i == 0)
    {
      temp++;
      break;
    }

  if (temp == 0 && num != 1)
  {
    printf("%i is a prime number\n", num);
  }

  else
  {
    printf("%i is not a prime number", num);
  }
}
