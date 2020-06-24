/**
*@file  ConsoleApplication8.cpp
*@author Селіванова М.О., гр. 515і
*@date 19 июня 2020
*@brief Практическая работа
*
*/
#include "Header.h"

int main() {
	int i;
	int h;
	int p=0;
	int number;
	int j[RAND_MAX];
	printf("1.Manual input\n"); //выбор ввод пользователем или рандомный
	printf("2.Random numbers\n");
	scanf_s("%d", &h);
	switch (h)	//В зависимости от выбора вызывается функция, обе записаны в inputs.cpp
	{
	case 1: user(j); break;
	case 2: random(j); for (i = 0; i < RAND_MAX; i++) { printf("%d ", j[i]); }; break;
	}
	find_zeros(j, &p);	//Вызов функции из findzeros.cpp
	printf("\nThe largest number of consecutive zeros: %d", p);
	return 0;
}
