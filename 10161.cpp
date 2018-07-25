#include <iostream>
#include <cmath>

int main() {
    int n;
    while (scanf("%d",&n) && n) {
        auto shell = (int)ceil(sqrt(n));
        int x,y,start=(int)pow(shell-1,2)+1;
        if (shell%2 == 0) {
            x = 1,y = shell;
            if (n <= start + shell -1) {
                x += n-start;
            } else {
                x = shell;
                y -= shell - ((int)pow(shell,2) - n + 1);
            }
        } else {
            x = shell,y = 1;
            if (n <= start + shell -1) {
                y += n-start;
            } else {
                y = shell;
                x -= shell - ((int)pow(shell,2) - n + 1);
            }
            //std::cout << x << " " << y << std::endl;
        }
        std::cout << x << " " << y << std::endl;
    }
}
