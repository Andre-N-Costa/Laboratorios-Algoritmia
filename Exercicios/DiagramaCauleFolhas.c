#include <stdio.h>
#include <assert.h>

int main() {
int mat[10][10] = {0},x=0;
    assert(scanf("%d",&x)== 1);
while (x != -1 ){
    mat[x/10][x%10]++;
    assert(scanf("%d",&x)== 1);
}
for(int i=0;i < 10; i++) {
    printf("%d|", i);
    for (int i1 = 0; i1 < 10; i1++) {
        while ((mat[i][i1]) > 0) {
            printf("%d",i1);
            (mat[i][i1])--;
        }
    }
    printf("\n");
}
    return 0;
}
