#include<iostream>
using namespace std;


void main() {
	setlocale(LC_ALL, "rus");

	int a, b, c;

	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;
	cout << "Введите их сумму: ";
	cin >> c;

	cout << "-----Проверяем-----" << endl;

	if (a + b == c) {
		cout << "Верно!" << endl;
	}
	else {
		cout << "Ошибка! Верный результат: " << a + b << endl;
	}
}