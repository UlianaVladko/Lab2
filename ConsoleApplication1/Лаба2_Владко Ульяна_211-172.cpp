#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	int x = 589;
	int y = 71;
	int z = 2;

	cout << "Результаты операций над 3мя переменными"<<endl;
	cout << "Сумма = " << x + y + z << endl;
	cout << "Разность = " << x - y - z << endl;
	cout << "Произведение = " << x * y * z << endl;
	cout << "Частное = " << x / y / z << endl;
	cout << "Остаток деления первого на второе = " << x % y << endl;
	
	cout << "\n(((145 - 100 / 20) / 20) * 50) + 45"<<endl;
	cout << "Результат выражения = " << (((145 - 100 / 20) / 20) * 50) + 45 << endl;

	int a = 3;
	int b = 7;

	cout << "\nРезультаты операций над 2мя переменными"<<endl;
	cout << "& двух переменных = " << (a && b) << endl;
	cout << "| двух переменных = " << (a || b) << endl;

	cout << "\nДополнительные операции с а"<<endl;
	cout << "Побитовое отрицание = " << ~a << endl;
	cout << "Сдвиг влево = " << (a >> 1) << endl;
	cout << "Сдвиг вправо = " << (a << 1) << endl;

	bool c{ true };
	bool d{ false };
	cout << "\ntrue && (true && (true && true || false) && (false || true != false))";
	bool rez{ c && (c && (c && c || d) && (d || c != d)) };
	cout << "\nРезультат булевского значения = " << rez<<endl;
	
	cout << "\n(25 < 48 && (23 > (3 + 15) || (2 < 8 && (5 >= 2 && 15 < 15))))\n";
	cout << "Результат логического выражения = " << (25 < 48 && (23 > (3 + 15) || (2 < 8 && (5 >= 2 && 15 < 15)))) << endl;
}


