#include <iostream>
#include <cmath>

int main() {
    int n,m,c; //c == 0 if black, c == 1 if white
    while (scanf("%d %d %d",&n,&m,&c) && n + m + c != 0) {
        if (c) {
            std::cout << ((n-7)*(m-7) + 1) / 2 << std::endl;
        } else {
            std::cout << (n-7)*(m-7) / 2 << std::endl;
        }
    }
}
