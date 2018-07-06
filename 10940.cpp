#include <iostream>
#include <cmath>

int main() {
    int n;
    while (scanf("%d",&n) && n) {
        auto exp((int)(log(n)/log(2)));
        if (fabs(log(n)/log(2) - exp*1.0) < 0.000001) {
            printf("%d\n", n);
        } else {
            auto diff(n - (1 << exp));
            printf("%d\n", 2 * diff);
        }
    }
}
