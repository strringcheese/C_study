#include <stdio.h>

int main() {
    int n; scanf("%d", &n);
    int cnt = 99
        
    if (n < 100) printf("%d\n", n);
    else {
        for (int i = 100; i <= n; i++) {
            if (i/100-i/10%10 == i/10%10-i%10) cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}
