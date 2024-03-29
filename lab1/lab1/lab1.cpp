﻿#include "stdafx.h"
#define  N		100
#define  CYCLE  1000000                       // количество циклов  

int main()
{
	setlocale(LC_ALL, "rus");
	double  av1 = 0, av2 = 0;
	clock_t  t1 = 0, t2 = 0;

	std::cout << "----------------------------------------\n";

	auxil::start();                          // старт генерации 
	t1 = clock();                            // фиксация времени 

	for (int i = 0; i < CYCLE; i++)
	{
		av1 += (double)auxil::iget(-100, 100); // сумма случайных чисел 
		av2 += auxil::dget(-100, 100);         // сумма случайных чисел 
	}
	t2 = clock();                            // фиксация времени в условных единицах процессорного времени


	std::cout << std::endl << "количество циклов:         " << CYCLE;
	std::cout << std::endl << "среднее значение (int):    " << av1 / CYCLE;
	std::cout << std::endl << "среднее значение (double): " << av2 / CYCLE;
	std::cout << std::endl << "продолжительность(у.е):    " << (t2 - t1);
	std::cout << std::endl << "                 (сек):    " << ((double)(t2 - t1)) / ((double)CLOCKS_PER_SEC);
	std::cout << std::endl;
	std::cout << "\n----------------------------------------\n";

	system("pause");

	return 0;
}
