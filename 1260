#include <iostream>
using std::cin;

int main() {
    int t, n, A[1000] = {0}, B[1000] = {0};
    scanf("%d",&t);
    while (t--) {
        scanf("%d",&n);
        for (size_t i=0; i<n; i++) {
            cin >> A[i];
            if (i > 0) {
                int count(0);
                for (size_t j=0; j<i; j++) {
                    if (A[j] <= A[i]) {
                        count++;
                    }
                }
                B[i-1] = count;
            }
        }
        int total(0);
        for (size_t i=0; i<n-1; i++) {
            total += B[i];
        }
        std::cout << total << std::endl;
    }
}
