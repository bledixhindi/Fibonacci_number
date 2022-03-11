#include <stdio.h>
int main() {

  int i, n;

  int x = 0,y = 1;

  int a = x + y;

  printf("Vendos numrin n: ");
  scanf("%d", &n);

  printf("Renditja: %d, %d, ", x, y);

  for (i = 0; i<= n; ++i) {
    printf("%d, ", a);
    x=y;
    y=a;
    a = x + y;
  }

  return 0;
}


