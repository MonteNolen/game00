// Game01.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "ctime"
#include "iostream"


using namespace std;
const int SET = 5;

int func();

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	int array_0[SET]{};

	for (int i = 0; i < SET; i++)
	{
		array_0[i] = 1 + rand() % 6;
		cout << "Массив содержит: " << array_0[i] << endl;
	}
	
	system("pause");
    return 0;
}

