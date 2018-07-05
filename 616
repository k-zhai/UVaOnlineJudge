#include <iostream>
#include <cmath>

int main() {
    int n;
    while (scanf("%d",&n) && n >= 0) {
        int sol = 0,j;
        for (int i=(int)std::sqrt(n)+1; i>=2; i--) {
            int ans = n;
            for (j=1; j<=i; j++) {
                if (ans%i != 1) break;
                ans -= ((ans-1)/i + 1);
            }
            if (ans%i == 0 && j == i+1) {
                sol = i;
                break;
            }
        }
        printf("%d coconuts, ", n);
        if (sol == 0) {
            printf("no solution\n");
        } else {
            printf("%d people and 1 monkey\n", sol);
        }
    }
}
