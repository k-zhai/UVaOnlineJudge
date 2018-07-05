#include <iostream>
#include <algorithm>

int main() {
    int t,n;
    scanf("%d",&t);
    while (t--) {
        scanf("%d",&n);
        int m[n][n],colOrder[n],max;
        for (size_t r=0; r<n; r++) {
            for (size_t c=0; c<n; c++) {
                std::cin >> m[r][c];
            }
        }
        for (int i=0; i<n; i++) {
            colOrder[i] = i;
        }
        int total(0);
        for (int i=0; i<n; i++) {
            total += m[i][colOrder[i]];
        }
        max = total;
        while (std::next_permutation(colOrder,colOrder+n)) {
            total = 0;
            for (int i=0; i<n; i++) {
                total += m[i][colOrder[i]];
            }
            if (total < max) {
                max = total;
            }
        }
        std::cout << max << std::endl;
    }
}
