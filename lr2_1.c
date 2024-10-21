#include<stdio.h>
#include<math.h>

int main() {
    double E;
    int resOfInput = 0;
    double previousS = 0;
    double currentS = 0;
    int curFactorial = 1;
    int curNum = 1;
    while (resOfInput != 1) { 
        printf("Input E: ");
        resOfInput = scanf("%lf", &E);
        scanf("%*[^\n]"); // очищаем буфер
    }
    while (fabs(currentS - previousS) > E || curFactorial <= 1.0 / E) {
        previousS = currentS;
        currentS = currentS + 1.0 / curFactorial;
        curNum++;
        curFactorial *= curNum;
    }
    printf("Result: %lf +- %lf", currentS, E);
}

