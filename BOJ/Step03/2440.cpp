#include <cstdio>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        for (int k = n; k >= i; --k)
            printf("*");
        printf("\n");
    }
}