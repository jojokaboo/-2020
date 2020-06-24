/**
*@file  Header.h
*@author Селіванова М.О., гр. 515і
*@date 19 июня 2020
*@brief Практическая работа
*
*/
#ifndef HEADER
#define HEADER
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define RAND_MAX 1000
/*
Функция создает рандомный список чисел
int j[i] присваивает массив чисел
*/
void random(int j[]);
/*
Пользователь сам заполняет массив числами
int j[i] присваивает массив чисел
*/
void user(int j[]);
/*
Функция ищет нули в массиве и считает их количество
если ноль стоит в числе, например 10, он не считается
int j[i] передается массив и он проверяется по нолям
*/
void find_zeros(int j[], int* p);
#endif // !HEADER
