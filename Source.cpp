#include<iostream>
#include<Windows.h>
#include"Car.h"
using namespace std;

double Car::tax_rate = 75.68;

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Car a("�065��", 129, 2008);
	Car b("a256��", 192, 2017);
	Car c("�150��", 260, 2020);
	a.Print();
	b.Print();
	c.Print();
	
	cout << "��������� ������: " << a.Tax_r() << " ���.\n\n";
	cout << "����� �� ������ ����������: " << a.Tax_calculation() << " ���.\n";
	cout << "����� �� ������ ����������: " << b.Tax_calculation() << " ���.\n";
	cout << "����� �� ������ ����������: " << c.Tax_calculation() << " ���.\n\n";
	a.Tax_r() = 120.85;
	cout << "��������� ������: " << a.Tax_r() << " ���.\n\n";
	cout << "����� �� ������ ����������: " << a.Tax_calculation() << " ���.\n";
	cout << "����� �� ������ ����������: " << b.Tax_calculation() << " ���.\n";
	cout << "����� �� ������ ����������: " << c.Tax_calculation() << " ���.\n\n";
}