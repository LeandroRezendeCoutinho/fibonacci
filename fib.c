
#include<stdio.h>
#include <time.h>

int fib(int);

int main()
{
  int n, i = 0, c;
  time_t start_t, end_t;
  double diff_t;

  time(&start_t);
  printf("%d\n",fib(42));
  time(&end_t);
  diff_t = difftime(end_t, start_t);
  printf("Execution time = %f\n", diff_t);

  return 0;
}

int fib(int n)
{
  if (n == 0 || n == 1)
    return n;
  else
    return (fib(n-1) + fib(n-2));
}
