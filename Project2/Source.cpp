#include <stdio.h>
#include <iostream>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "");

	//5
	/*int a, b, sum, proizv, razn;
	float chast;
start:
	printf("Введите число A:");
	scanf_s("%d", &a);
	printf("Введите число B:");
	scanf_s("%d", &b);
	sum = a  + b;
	razn = a - b;
	proizv = a*b;
	chast = (float)a / (float)b;
	printf("Сумма: %d\n Разность: %d\n Произведение: %d\n Частное: %f\n", sum, razn, proizv, chast);
	goto start;*/


	//4
	/*int a, b, sum, proizv;
	float razn, chast;
	start:
	printf("Введите число A:");
	scanf_s("%d", &a);
	printf("Введите число B:");
	scanf_s("%d", &b);
	sum = a * a + b * b;
	razn = (float)a * (float)a - (float)b * (float)b;
	proizv = a * a*b*b;
	chast = ((float)a*(float)a) / ((float)b*(float)b);
	printf("Сумма: %d\n Разность: %f\n Произведение: %d\n Частное: %f\n", sum, razn, proizv, chast);
	goto start;
*/


	//3
	/*int a, b, total;
	start:
	printf("Введите число A:");
	scanf_s("%d", &a);
	printf("Введите число B:");
	scanf_s("%d", &b);
	total = a + b;
	printf("Ответ: %d\n", total);
	goto start;*/

	//2
	/*int x, y, z, total;
	x = 3;
	z = x + 2;
	y = 7 + z;
	total = x + y + z;
	printf("Общая стоимость: %d\n", total);
*/

	//1
	/*float x, y, f;
	printf("Введите число x:");
	scanf_s("%f", &x);
	printf("Введите число y:");
	scanf_s("%f", &y);
	f = (x - y) / (1 + (x + y));
	printf("Ответ: %f\n", f);
*/





	system("pause");





}