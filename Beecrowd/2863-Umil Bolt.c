
#include <stdio.h>

int main() {

    int test;
    double time, min;

    while (scanf("%d", &test) != EOF) {
        min = 11;

        while (test--) {
            scanf("%lf", &time);
            if (time < min)
                min = time;
        }

        printf("%.2lf\n", min);
    }

    return 0;f
}
