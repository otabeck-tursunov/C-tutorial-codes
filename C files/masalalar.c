#include <stdio.h>

int main() {
    int k;
    int n;

    printf("k = ");
    scanf("%d", &k);

    getchar();

    printf("n = ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("%d", k);
    }
}