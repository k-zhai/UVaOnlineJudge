#include <iostream>
#include <iomanip>
#include <algorithm>
using std::cin;

int main() {
    while (1) {
        int f,r,a[100],b[100],index(0);
        scanf("%d",&f);
        if (f == 0) break;
        scanf("%d",&r);
        double c[f*r];
        for (size_t i=0; i<f; i++) {
            cin >> a[i];
        }
        for (size_t i=0; i<r; i++) {
            cin >> b[i];
        }
        for (size_t i=0; i<f; i++) {
            for (size_t j=0; j<r; j++) {
                c[index] = (1.0*b[j])/(1.0*a[i]);
                index++;
            }
        }
        std::sort(c, c+f*r);
        double max = 0;
        for (size_t i=0; i<f*r-1; i++) {
            if (c[i+1]/c[i] > max) {
                max = c[i+1]/c[i];
            }
        }
        std::cout << std::fixed << std::setprecision(2) << max << std::endl;
    }
}
