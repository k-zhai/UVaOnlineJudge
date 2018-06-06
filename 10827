#include <iostream>
#include <algorithm>
#include <gmp.h>

int main() {
    int t,n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        int a[2*n][2*n],max(-100*75*75),sum;
        for (size_t i = 0; i < n; i++) {
            for (size_t j = 0; j < n; j++) {
                scanf("%d", &a[i][j]);
                a[i][j+n] = a[i][j];
                a[i+n][j] = a[i][j+n];
                a[i+n][j+n] = a[i][j];
            }
        }
        for (size_t i=0; i<2*n; i++) {
            for (size_t j=0; j<2*n; j++) {
                if (i > 0) a[i][j] += a[i-1][j];
                if (j > 0) a[i][j] += a[i][j-1];
                if (i > 0 && j > 0) a[i][j] -= a[i-1][j-1];
            }
        }
        for (size_t i=0; i<n; i++)  {
            for (size_t j=0; j<n; j++) {
                for (size_t k=i; k<i+n; k++) {
                    for (size_t l=j; l<j+n; l++) {
                        sum = a[k][l];
                        if (i > 0) sum -= a[i-1][l];
                        if (j > 0) sum -= a[k][j-1];
                        if (i > 0 && j > 0) sum += a[i-1][j-1];
                        max = std::max(max, sum);
                        //std::cout << i << " " << j << " " << k << " " << l << std::endl;
                        //std::cout << sum << std::endl;
                    }
                }
            }
        }
        std::cout << max << std::endl;
    }
}
