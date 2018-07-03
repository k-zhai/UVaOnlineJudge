#include <iostream>

int main() {
    int n;
    std::cout << "PERFECTION OUTPUT" << std::endl;
    while (1) {
        scanf("%d", &n);
        int sum = 0;
        if (n == 0) break;
        for (size_t i=1; i<n; i++) {
            if (n%i == 0) {
                sum += i;
            }
        }
        printf("%5d  ", n);
        if (sum > n) {
            std::cout << "ABUNDANT" << std::endl;
        } else if (sum < n) {
            std::cout << "DEFICIENT" << std::endl;
        } else {
            std::cout << "PERFECT" << std::endl;
        }

    }
    std::cout << "END OF OUTPUT" << std::endl;
}
