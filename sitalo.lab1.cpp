//#include "stdafx.h"
#include "iostream" 
#include "cstdlib" 

#include "iomanip" 

using namespace std;

int main()

{

	setlocale(LC_ALL, "Russian");

	cout << "HELLO!!!\n";

	cout << "\t\t -----\n";

	cout << "\t\t|     |\n";

	cout << "\t\t|     |\n";

	cout << "\t\t -----\n";

	cout << right << setw(16) << "Фамилия:" << "Ситало\n" ;
	cout << right << setw(16) << "Имя:" << "Антон\n";
	cout << right << setw(16) << "Отчество:" << "Владимировыч\n";
	cout << right << setw(16) << "Пол:" << "Мужской\n";
	cout << right << setw(16) << "Дата рождения:" << "30.01.2004\n";
	cout << right << setw(16) << "Адрес:" << "Ветеренарная 12\n";
	cout << right << setw(16) << "Номер телефона:" << "093 352 7942\n";
	cout << right << setw(16) << "Место учебы:" << "ДНУ\n";
	cout << right << setw(16) << "Класс:" << "ПА-21-1\n";
	cout << right << setw(16) << "Хобби:" << "игры и рисование \n";
	system("pause");

	return 0;

}