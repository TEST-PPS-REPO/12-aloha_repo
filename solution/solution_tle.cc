#include <vector>
#include <cstdio>
int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    for (volatile int i = 2147483647; i--; ) {
        volatile std::vector < int > v(a);
    }
    printf("%d\n", a + b + c);
    return 0;
}