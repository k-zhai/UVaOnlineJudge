#include <iostream>
using std::cin;

int main() {
    int c(1);
    while (1) {
        int n, m, a[1000];
        scanf("%d",&n);
        if (n == 0) break;
        for (size_t i=0; i<n; i++) {
            cin >> a[i];
        }
        scanf("%d",&m);
        int sum;
        std::cout << "Case " << c << ":" << std::endl;
        for (size_t t=1; t<=m; t++) {
            int num, min(1000000000);
            cin >> num;
            for (size_t i=0; i<n-1; i++) {
                for (size_t j=i+1; j<n; j++) {
                    if (std::abs(a[i] + a[j] - num) < min) {
                        min = std::abs(a[i] + a[j] - num);
                        sum = a[i] + a[j];
                    }
                }
            }
            std::cout << "Closest sum to " << num << " is " << sum << "." << std::endl;
        }
        c++;
    }
}
