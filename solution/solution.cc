#include <cstdio>
int main() {
    int x, s = 0;
    for (int i = 3; i--; ) {
        scanf("%d", &x);
        s += x;
    }
    printf("%d\n", s);
    return 0;
}