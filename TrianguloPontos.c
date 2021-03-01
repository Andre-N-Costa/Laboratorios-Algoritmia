#include <stdio.h>
#include <assert.h>

int main() {
    int x, y, z, w, a;
    assert(scanf("%d", &x)==1);
    w = x;
    x = (x * 2);
    z = 2;
    for (y = (x - 1); y > w; y--) {
        a = z;
            while (z != (a / 2)) {
                printf("*");
                z--;
                x--;
            }
            while (x > z) {
                printf(".");
                x--;
            }
            while (z > 1) {
                printf("*");
                z--;
            }
            printf("*\n");
            x = w * 2;
            z = a + 2;
        }
    for (y=y;(y > 0);y--) {
        a = z;
        while (z != (a / 2)) {
            printf("*");
            z--;
            x--;
        }
        while (x > z) {
            printf(".");
            x--;
        }
        while (x > 1){
            printf("*");
            x--;
        }
        printf("*\n");
        x = w * 2;
        z = a - 2;
    }
        return 0;
    }