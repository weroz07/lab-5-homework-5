

<h1 align="center">Домашнее задание к работе 5</h1>
<div align="center">



## Условие задачи

<img width="557" height="79" alt="image" src="https://github.com/user-attachments/assets/21547583-0861-4f53-bafe-98c3d558eb04" />


## 1. Алгоритм и блок-схема

<div align="center">

### Алгоритм
1. **Начало**
2. Ввод значений с клавиатуры<br>
   -   `x` - первое число<br>
   -   `y` - второе число
   -   `z` - третье число
3. Вычисления<br>
   -   `double f1 = atan(x);` 
   -   `double f2 = 5 * a1;`   
   -   `double f3 = acos(x);` 
   -   `double f4 = fabs(x - y);`
   -   `double f5 = pow(x, 2);`
   -   `double f6 = 3 * a4;` 
   -   `double f7 = x + a6 + a5;` 
   -   `double f8 = a4 * z;` 
   -   `double f9 = a8 + a5;` 
   -   `double f10 = a7 / a9;` 
   -   `double f11 = 0.25;`
   -   `double f12 = a11 * a3 * a10;` 
   -   `double f13 = a2 - a12;` 
4. Вывод каждого действия и конечного ответа.
5. **Конец**

</div>

### Блок-схема

<img width="221" height="931" alt="Диаграмма без названия drawio" src="https://github.com/user-attachments/assets/056ae5d9-7a65-4c11-944d-f56f69aec810" />




</div>

## 2. Реализация программы

```c
// Подключение библиотек
#include <stdio.h>
#include <locale.h>
#include <math.h>

// Создание основной функции

int main() {
	setlocale(LC_CTYPE, "RUS");
	float x;
	float y;
	double z;
	puts("Введите переменные X,Y,Z");
	scanf("%f %f %lf", &x, &y, &z);
	getchar();
	double f1 = atan(x); 
	double f2 = 5 * a1;   
	double f3 = acos(x); 
	double f4 = fabs(x - y); 
	double f5 = pow(x, 2); 
	double f6 = 3 * a4; 
	double f7 = x + a6 + a5; 
	double f8 = a4 * z;
	double f9 = a8 + a5; 
	double f10 = a7 / a9; 
	double f11 = 0.25;
	double f12 = f11 * f3 * f10;
	double f13 = f2 - f12; 
	printf("%lf", f13);
}

```
<div align="center">

## 3. Результаты работы программы

<img width="851" height="142" alt="image" src="https://github.com/user-attachments/assets/84316fef-3898-468d-ac50-5028944c1004" />




## 4. Информация о разработчике
Выполнил Парахин Даниил Сергеевич, бИПТ-252(2)


