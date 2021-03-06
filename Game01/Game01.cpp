// Game01.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "ctime"
#include "iostream"


using namespace std;
int sum_user = 0; //количество за бросок юзером
int sum_comp = 0; // количество за бросок компом
const int COL = 1; // колонка
const int ROW = 2; // строка
int array_0[COL][ROW]{};

int sum_0 = 0; // проежуточный подсчет
int sum_1 = 0; // проежуточный подсчет
int winner = 0; // последний подсчет

int counter = 1; // счетчик

bool user;
bool comp;

void func_user(int[COL][ROW], const int size, int sum);
void func_comp(int[COL][ROW], const int size, int sum);

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	cout << "Определим кто будет ходить первый. Выберите 1 или 0: "<< endl;
	cin >> user;
	if (user == true) 
	{
		cout << "Вы ходите первый." << endl << endl;
	}
	else 
		cout << "Первым ходил компьютер." << endl << endl;

	do 
	{
		cout << endl << "Раунд: " << counter << endl;
		func_user(array_0, ROW, sum_user);
		func_comp(array_0, ROW, sum_comp);
		counter += 1;

	} while (counter < 5);

	if (sum_user < sum_comp)
	{
		cout << endl << "Выиграл компьютер" << endl;
	}
	else if (sum_user == sum_comp)
	{
		cout << endl << "Ничья" << endl;
	}
	else
		cout << endl << "Вы выигрыли" << endl;

	system("pause");
    return 0;
}

void func_user(int[COL][ROW], const int size, int sum) 
{
	
	for (int i = 0; i < COL; i++)
	{
		cout << "Бросает игрок:";
		for (int j = 0; j < ROW; j++) 
		{
			array_0[i][j] = 1 + rand() % 6;
			cout << " " << array_0[i][j];
			sum_user += array_0[i][j];
		}
		cout << "." << endl;
		
	}
	cout << "Вего: " << sum_user << " очков." << endl;
};
void func_comp(int[COL][ROW], const int size, int sum) 
{

	for (int i = 0; i < COL; i++)
	{
		cout << "Бросает компьютер:";
		for (int j = 0; j < ROW; j++) 
		{
			array_0[i][j] = 1 + rand() % 6;
			cout << " " << array_0[i][j];
			sum_comp += array_0[i][j];
		}
		cout << "." << endl;

	}
	cout << "Вего: " << sum_comp << " очков." << endl;
};