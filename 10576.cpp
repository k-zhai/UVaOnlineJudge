#include <iostream>

void backtrack (int s, int d, int m);

int tmp(0),total(0),months[12];

int main() {
    int s,d;
    while (scanf("%d %d",&s,&d) == 2) {
        for (int i : months) {
            months[i] = 0;
        }
        backtrack(s, d, 0);
        if (total > 0) {
            std::cout << total << std::endl;
        } else {
            std::cout << "Deficit" << std::endl;
        }
        total = 0, tmp = 0;
    }
}

void backtrack(int s, int d, int m) {
    if (m == 12) {
        if (tmp > total) {
            //std::cout << "------------------------------------------------Total: " << tmp << std::endl;
            total = tmp;
        }
        return;
    }

    //surplus
    tmp += s;
    months[m] = s;
    if (m > 5 && months[m]+months[m-1]+months[m-2]+months[m-3]+months[m-4] > 0) {
        tmp -= s;
        months[m] = 0;
        return;
    }
    //std::cout << m << " surplus " << tmp << std::endl;
    backtrack(s, d, m+1);
    tmp -= s;
    months[m] = 0;

    //deficit
    tmp -= d;
    months[m] = -d;
    if (m > 5 && months[m]+months[m-1]+months[m-2]+months[m-3]+months[m-4] > 0) {
        tmp += d;
        months[m] = 0;
        return;
    }
    //std::cout << m << " deficit " << tmp << std::endl;
    backtrack(s, d, m+1);
    tmp += d;
    months[m] = 0;
}
