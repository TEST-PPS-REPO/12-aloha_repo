#include <algorithm>
#include <cstdio>
int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%d\n", std::min(10, a + b + c));
    return 0;
}