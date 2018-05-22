#include <iostream>
#include <vector>
using std::cin;
using std::vector;

void backtrack(int index, int cursum, int numtracks[]);

vector<int> tmp, ans;
int n, t, max(0);

int main() {
    while (1) {
        int total(0), numtracks[20];
        if (scanf("%d %d",&n,&t) == EOF) break;
        for (size_t i=0; i<t; i++) {
            scanf("%d",&numtracks[i]);
        }
        tmp.clear();
        backtrack(0, 0, numtracks);
        for (int j : ans) {
            std::cout << j << " ";
            total += j;
        }
        std::cout << "sum:" << total << std::endl;
        max = 0;
    }
}

void backtrack(int index, int cursum, int numtracks[]) {
    if (cursum > max) {
        max = cursum;
        ans = tmp;
    }
    for (int i=index; i<t; i++) {
        if (cursum + numtracks[i] <= n) {
            cursum += numtracks[i];
            tmp.push_back(numtracks[i]);

            vector<int>::iterator j;
            for (j = tmp.begin(); j != tmp.end(); ++j) {
                std::cout << *j << ' ';
            }
            std::cout << "\n";

            backtrack(i+1, cursum, numtracks);
            cursum -= numtracks[i];
            tmp.pop_back();
        }
    }
}
