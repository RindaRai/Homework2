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
	printf("������� ����� A:");
	scanf_s("%d", &a);
	printf("������� ����� B:");
	scanf_s("%d", &b);
	sum = a  + b;
	razn = a - b;
	proizv = a*b;
	chast = (float)a / (float)b;
	printf("�����: %d\n ��������: %d\n ������������: %d\n �������: %f\n", sum, razn, proizv, chast);
	goto start;*/


	//4
	/*int a, b, sum, proizv;
	float razn, chast;
	start:
	printf("������� ����� A:");
	scanf_s("%d", &a);
	printf("������� ����� B:");
	scanf_s("%d", &b);
	sum = a * a + b * b;
	razn = (float)a * (float)a - (float)b * (float)b;
	proizv = a * a*b*b;
	chast = ((float)a*(float)a) / ((float)b*(float)b);
	printf("�����: %d\n ��������: %f\n ������������: %d\n �������: %f\n", sum, razn, proizv, chast);
	goto start;
*/


	//3
	/*int a, b, total;
	start:
	printf("������� ����� A:");
	scanf_s("%d", &a);
	printf("������� ����� B:");
	scanf_s("%d", &b);
	total = a + b;
	printf("�����: %d\n", total);
	goto start;*/

	//2
	/*int x, y, z, total;
	x = 3;
	z = x + 2;
	y = 7 + z;
	total = x + y + z;
	printf("����� ���������: %d\n", total);
*/

	//1
	/*float x, y, f;
	printf("������� ����� x:");
	scanf_s("%f", &x);
	printf("������� ����� y:");
	scanf_s("%f", &y);
	f = (x - y) / (1 + (x + y));
	printf("�����: %f\n", f);
*/





	system("pause");





}