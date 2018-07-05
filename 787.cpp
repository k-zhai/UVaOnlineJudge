#include <iostream>
#include <algorithm>
#include <gmp.h>

int main() {
    while (1) {
        int a[101]({0}),index(1),num(0);
        if (scanf("%d",&num) == EOF) {
            break;
        } else {
            a[0] = num;
        }
        while (num != -999999) {
            scanf("%d",&num);
            a[index] = num;
            index++;
        }
        /*for (size_t i=0; i<101; i++) {
            std::cout << a[i] << " ";
        }*/
        long long product(LONG_LONG_MIN);
        for (size_t i=0; i<index-1; i++) {
            if (a[i] == -999999) break;
            long long tmp(1);
            for (size_t j=i; j<index-1; j++) {
                tmp *= a[j];
                if (tmp == 0 && product > 0) break;
                //std::cout << product << " " << tmp << std::endl;
                product = std::max(product, tmp);
            }

        }
        std::cout << product << std::endl;
    }
}
