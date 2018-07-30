#include <iostream>

int main() {
    int n;
    while (scanf("%d",&n) && n) {
        int count(0);
        bool m[10000] = {false};
        while (!m[n]) {
            m[n] = true;
            n = (n*n/100)%10000;
            ++count;
        }
        printf("%d\n",count);
    }
}

