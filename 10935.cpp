#include <iostream>
#include <queue>
using std::queue;

int main() {
    int n;
    while (scanf("%d",&n) && n) {
        queue<int> q;
        printf("Discarded cards:");
        for (size_t i=1; i<=n; i++) {
            q.push(i);
        }
        while (q.size() > 1) {
            int tmp = q.front();
            if (q.size() == n) {
                printf(" %d", tmp);
            } else {
                printf(", %d", tmp);
            }
            q.pop();
            tmp = q.front();
            q.pop();
            q.push(tmp);
        }
        printf("\nRemaining card: %d\n", q.front());
    }
}


