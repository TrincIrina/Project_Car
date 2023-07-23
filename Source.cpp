#include<iostream>
#include<Windows.h>
#include"Car.h"
using namespace std;

double Car::tax_rate = 75.68;

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Car a("с065мк", 129, 2008);
	Car b("a256аа", 192, 2017);
	Car c("р150ку", 260, 2020);
	a.Print();
	b.Print();
	c.Print();
	
	cout << "Налоговая ставка: " << a.Tax_r() << " руб.\n\n";
	cout << "Налог на первый автомобиль: " << a.Tax_calculation() << " руб.\n";
	cout << "Налог на второй автомобиль: " << b.Tax_calculation() << " руб.\n";
	cout << "Налог на третий автомобиль: " << c.Tax_calculation() << " руб.\n\n";
	a.Tax_r() = 120.85;
	cout << "Налоговая ставка: " << a.Tax_r() << " руб.\n\n";
	cout << "Налог на первый автомобиль: " << a.Tax_calculation() << " руб.\n";
	cout << "Налог на второй автомобиль: " << b.Tax_calculation() << " руб.\n";
	cout << "Налог на третий автомобиль: " << c.Tax_calculation() << " руб.\n\n";
}