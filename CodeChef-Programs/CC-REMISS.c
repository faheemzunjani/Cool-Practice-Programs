#include <stdio.h>
 
int max(int a, int b) {
  return((a > b) ? a : b);
}
 
int main() {
  setbuf(stdin, NULL);
  int t, a, b;
  scanf("%d", &t);
  while(t--) {
    scanf("%d %d", &a, &b);
    printf("%d %d\n", max(a, b), a + b);
  }
  return 0;
} 