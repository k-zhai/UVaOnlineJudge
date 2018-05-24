#include <iostream>
#include <algorithm>


int main() {
    int n;
    while (scanf("%d",&n) != EOF) {
        int books[n],m,start(0),end(n-1),first,second;
        for (int i=0; i<n; i++) {
            scanf("%d",&books[i]);
        }
        scanf("%d",&m);
        std::sort(books,books+n);
        while (start < end) {
            if (books[start] + books[end] < m) {
                start++;
            } else if (books[start] + books[end] > m) {
                end--;
            } else {
                first = books[start];
                second = books[end];
                start++;
                end--;
            }
        }
        std::cout << "Peter should buy books whose prices are " <<
                  first << " and " << second << ".\n" << std::endl;
    }
}
