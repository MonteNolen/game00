// Game01.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "ctime"
#include "iostream"


using namespace std;
const int SIZE = 5;
int array_0[SIZE]{};

void func(int[SIZE], const int size);

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	func(array_0, SIZE);
	
	system("pause");
    return 0;
}

void func(int[SIZE], const int size) {
	for (int i = 0; i < SIZE; i++)
	{
		array_0[i] = 1 + rand() % 6;
		cout << "Массив содержит: " << array_0[i] << endl;
	}
};