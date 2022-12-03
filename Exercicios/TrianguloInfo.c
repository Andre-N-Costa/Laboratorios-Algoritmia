#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <math.h>

int max(int x, int y, int z) {
if (x > y) {
    if (x > z) return x;
    else return z;
}
else if (y > z) return y;
else return z;
}
int somaquad(int x,int y,int z) {
if (max(x,y,z) == x) return ((z*z)+(y*y));
else if (max(x,y,z) == y) return ((x*x)+(z*z));
else return ((x*x)+(y*y));
}

char* tipo(int a,int b,int c)
{
if ((max(a,b,c) * max(a,b,c)) == somaquad(a,b,c)) return ("RETANGULO");
else if ((a == b) && (b == c)) return ("EQUILATERO");
else if ((a != b) && (b != c) && (a != c)) return ("ESCALENO");
else if (((a != b) && (a == c)) || ((a == b) && ( b != c)) || ((c == b) && (c != a))) return ("ISOSCELES");
return 0;
}
int main() {
    int a,b,c;
    float area,p,perimetro;
    assert(scanf("%d%d%d",&a,&b,&c) == 3);
    perimetro = a + b + c;
    p = perimetro / 2;
    area = sqrt(p*(p-a)*(p-b)*(p-c));

    if ((abs(b - c) < a) && (a < (b + c)) && (abs(a - c) < b) && (b < a + c) && (abs(a - b) < c) && (c < a + b))
        (printf("%s %.0f %.2f\n",tipo(a,b,c),perimetro, area));


    else printf("INVALIDO\n");
    return 0;
}
