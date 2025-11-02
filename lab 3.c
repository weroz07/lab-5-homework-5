#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

#define M_PI 3.14159265358979323846

int main() {
    setlocale(LC_ALL, "Russian");

    double gr;

    printf("¬ведите угол в градусах: ");
    scanf("%lf", &gr);

    double rad = gr * M_PI / 180;
    double result = sin(rad);

    printf("sin(%.0f∞) = %.6f\n", gr, result);

    return 0;
}