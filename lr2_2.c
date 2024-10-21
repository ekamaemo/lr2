#include<stdio.h>
#include<math.h>

int main() {
    double E;
    int resOfInput = 0;
    float n = 1.0;
    float h;
    while (resOfInput != 1) { 
        printf("Input E: ");
        resOfInput = scanf("%lf", &E);
        scanf("%*[^\n]"); // очищаем буфер
    }
    float a;
    resOfInput = 0;
    while (resOfInput != 1) { 
        printf("Input a: ");
        resOfInput = scanf("%f", &a);
        scanf("%*[^\n]"); // очищаем буфер
    }
    float b;
    resOfInput = 0;
    while (resOfInput != 1) { 
        printf("Input b: ");
        resOfInput = scanf("%f", &b);
        scanf("%*[^\n]"); // очищаем буфер
    }
    double curIntegral = E;
    double prevIntegral = 0;
    float x = b;
    float x0 = a;
    while (fabs(curIntegral - prevIntegral) >= E) {
        prevIntegral = curIntegral;
        double s = 0.0;
        h = (b - a) / n;
        for (int i = 0; i < n; i ++) {
            double si = h * log(a + h * (i + 0.5));
            s += si;
            x0 = x;
            x += h;
        }
        curIntegral = s;
        n *= 2;
    }
    printf("Integral of natural logarifm: %lf +- %lf", curIntegral, E);
}

