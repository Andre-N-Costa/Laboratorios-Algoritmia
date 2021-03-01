#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int a,b,c;
    float area,p,perimetro;
    assert(scanf("%d%d%d",&a,&b,&c) == 3);
    perimetro = a + b + c;
    p = perimetro / 2;
    area = sqrt(p*(p-a)*(p-b)*(p-c));
    if ((abs(b - c) < a) && (a < (b + c)) && (abs(a - c) < b) && (b < a + c) && (abs(a - b) < c) && (c < a + b)) {
        if ((((a > b) && (a > c)) && ((a*a)==(b*b)+(c*c))) || (((b > a) && (b > c)) && ((b*b)==(a*a)+(c*c))) || (((c > b) && (c > a)) && ((c*c)==(b*b)+(a*a)))) (printf("%s %.0f %.2f\n","RETANGULO",perimetro, area));
        else if ((a == b) && (b == c)) (printf("%s %.0f %.2f\n","EQUILATERO",perimetro, area));
        else if ((a != b) && (b != c) && (a != c)) (printf("%s %.0f %.2f\n","ESCALENO",perimetro, area));
        else if (((a != b) && (a == c)) || ((a == b) && ( b != c)) || ((c == b) && (c != a))) (printf("%s %.0f %.2f\n","ISOSCELES",perimetro, area));
        }
    else printf("INVALIDO\n");
    return 0;
}