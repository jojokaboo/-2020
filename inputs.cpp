/**
*@file  inputs.cpp
*@author Селіванова М.О., гр. 515і
*@date 19 июня 2020
*@brief Практическая работа
*
*/
#include "Header.h"

void random(int j[]) {
	srand(time(0));
	int i;
	for (i = 0; i < RAND_MAX; i++) {	//Генерируется рандомный список чисел
		j[i] = rand() % 21 - 10;		//Промежуток можно задавать просчитав
	}
}

void user(int j[]) {
	printf("Input %i numbers: ", RAND_MAX);	//Пользователь вводит числа в массив 
	for (int i = 0; i < RAND_MAX; i++) {
		scanf_s("%d", &j[i]);				//Запись чисел в массив
	}
}
