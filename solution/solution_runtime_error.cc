#include <cstdio>
int ar[2];
int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    ar[a] = a;
    ar[b] = b;
    ar[c] = c;
    printf("%d\n", a + b + c);
    return 0;
}