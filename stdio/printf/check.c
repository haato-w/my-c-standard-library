#include "src/ft_printf.h"

#include <stdio.h>
int main()
{
  int ret1, ret2, ret3, ret4;
  
  printf("===Check1===\n");
  ret1 = ft_printf("hello");
  ret2 = ft_printf(" world\n");
  ret3 = printf("hello");
  ret4 = printf(" world\n");
  if (ret1 != ret3)
    printf("No!\n, %d != %d\n", ret1, ret3);
  if (ret2 != ret4)
    printf("No!\n, %d != %d\n", ret2, ret4);

  printf("\n===Check2===\n");
  ret1 = ft_printf("i: %10d!!%2c, !, %4s\n", 10, 'a', "hello");
  ret2 = printf("i: %10d!!%2c, !, %4s\n", 10, 'a', "hello");
  if (ret1 != ret2)
    printf("No!\n, %d != %d\n", ret1, ret2);

  printf("\n===Check3===\n");
  int a;
  ret1 = ft_printf("p: %p\n", &a);
  ret2 = printf("p: %p\n", &a);
  if (ret1 != ret2)
    printf("No!\n, %d != %d\n", ret1, ret2);

  printf("\n===Check4===\n");
  ret1 = ft_printf("%3u, %3u, %3x, %3x, %3X, %3X\n", 10, -1, 10, -1, 10, -1);
  ret2 = printf("%3u, %3u, %3x, %3x, %3X, %3X\n", 10, -1, 10, -1, 10, -1);
  if (ret1 != ret2)
    printf("No!\n, %d != %d\n", ret1, ret2);

  printf("\n===Check5===\n");
  ret1 = ft_printf("%%%i\n", 1);
  ret2 = printf("%%%i\n", 1);
  if (ret1 != ret2)
    printf("No!\n, %d != %d\n", ret1, ret2);

  printf("\n===Check6===\n");
  ret1 = ft_printf("%c", '0');
  ft_printf("\n");
  ret2 = printf("%c", '0');
  printf("\n");
  if (ret1 != ret2)
    printf("No!\n, %d != %d\n", ret1, ret2);

  printf("\n===Check7===\n");
  ret1 = ft_printf("0");
  ft_printf("\n");
  ret2 = printf("0");
  printf("\n");
  if (ret1 != ret2)
    if (ret1 != ret2)
    printf("No!\n, %d != %d\n", ret1, ret2);

  printf("\n===Check8===\n");
  ret1 = ft_printf("c");
  ft_printf("\n");
  ret2 = printf("c");
  printf("\n");
  if (ret1 != ret2)
    printf("No!\n, %d != %d\n", ret1, ret2);

  printf("\n===Check9===\n");
  ret1 = ft_printf(" NULL %s NULL ", NULL);
  ft_printf("\n");
  ret2 = printf(" NULL %s NULL ", NULL);
  printf("\n");
  if (ret1 != ret2)
    printf("No!\n, %d != %d\n", ret1, ret2);

  printf("\n===Check10===\n");
  ret1 = ft_printf(" %p %p ", 0, 0);
  ft_printf("\n");
  ret2 = printf(" %p %p ", 0, 0);
  printf("\n");
  if (ret1 != ret2)
    printf("No!\n, %d != %d\n", ret1, ret2);
  
  printf("\n===Check11===\n");
  ret1 = ft_printf(" %u ", 0);
  ft_printf("\n");
  ret2 = printf(" %u ", 0);
  printf("\n");
  if (ret1 != ret2)
    printf("No!\n, %d != %d\n", ret1, ret2);

  return (0);
}
