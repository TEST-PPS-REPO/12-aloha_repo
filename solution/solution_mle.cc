#include <vector>
#include <cstdio>
int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    std::vector < std::vector < int > > w;
    for (volatile int i = 10000; i--; ) {
        std::vector < int > v(10101010);
        w.push_back(v);
    }
    printf("%d\n", a + b + c);
    return 0;
}
