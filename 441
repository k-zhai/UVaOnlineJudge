#include <iostream>

int main() {
    bool start = true;
    int k,a,b,c,d,e,f;
    while (1) {
        std::cin >> k;
        if (k == 0) break;
        if (!start) std::cout << "\n";
        int arr[k];
        for (size_t i=0; i<k; i++) {
            scanf("%d",&arr[i]);
        }
        for (a=0; a<k-5; a++) {
            for (b=a+1; b<k-4; b++) {
                for (c=b+1; c<k-3; c++) {
                    for (d=c+1; d<k-2; d++) {
                        for (e=d+1; e<k-1; e++) {
                            for (f=e+1; f<k; f++) {
                                printf("%d %d %d %d %d %d\n",arr[a],arr[b],
                                       arr[c],arr[d],arr[e],arr[f]);
                            }
                        }
                    }
                }
            }
        }
        start = false;
    }
}
