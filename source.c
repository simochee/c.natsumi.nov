#include <stdio.h>
#include <math.h>

int main(void) {
        int n, i, amount = 0;

        printf("n: ");
        scanf("%d", &n);

        for (i = 0; i < n; i++) {
                amount += pow(2, i);
        }

        printf("%d日目までの貯金額は%d円です\n", n, amount);

        return (0);
}
