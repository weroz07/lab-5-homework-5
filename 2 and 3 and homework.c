// 5. 2
//#include<stdio.h>
//#include<math.h>
//#include<locale.h>
//
//double c = 0.4;
//
//int main()
//{
//	double a, b, x, y;
//
//	setlocale(LC_ALL, "RUS");
//	puts("Введите число x");
//	scanf("%lf", &x);
//	a = log10(x);
//	b = pow(a, 2) + sqrt(c * x);
//	y = exp(2 * x) + pow(9.7, b);
//	printf("%7.2lf", y);
//
//	return 0;
//
//}


//5. 3
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//#include<locale.h>
//double c = 0.4;
//
//int main()
//{
//	double a, b, x, y;
//	int A, B, C, yslovie_a, yslovie_b;
//
//	setlocale(LC_ALL, "RUS");
//
//	puts("Введите число x");
//	scanf("%lf", &x);
//	a = log10(x);
//	b = pow(a, 2) + sqrt(c * x);
//	y = exp(2 * x) + pow(9.7, b);
//
//	A = (int)a;
//	B = (int)b;
//	C = (int)y;
//
//	yslovie_a = (A % 2 == 0 && B % 2 != 0) || (A % 2 != 0 && B % 2 == 0);
//	yslovie_b = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);
//
//	printf("Условие A вып(1 - да, 0 - нет) : % d\n", yslovie_a);
//	printf("Условие Б вып(1 - да, 0 - нет) : % d\n", yslovie_b);
//	printf("%d\n", A);
//	printf("%d\n", B);
//	printf("%d\n", C);
//
//	return 0;


//5 homework
#include <stdio.h>
#include <math.h>

int main() {
    double d, E;

    double result1 = 1.86e-5 / (1 + pow(-3 / (2.1e5), 2) + (1 / 0.3) * pow(-3 / (2.1e5), 2));
    double result2 = 1.86e-5 / (1 + pow(10 / (2.1e5), 2) + (2.1e-3 / 0.3) * pow(10 / (2.1e5), 2));

    printf("F(1, -3) = %lf\n", result1);
    printf("F(2.1*10^-3, 10) = %le\n", result2);

    return 0;
}