#include "Car.h"


void Car::Input()
{
	std::cout << "������� ���. ����� ����������: "; std::cin >> state_number;
	std::cout << "������� �������� ����������: "; std::cin >> power;
	std::cout << "������� ��� ������������ ����������: "; std::cin >> year_prodact;
}

void Car::Print()
{
	std::cout << "���. ����� ����������: " << state_number << std::endl;
	std::cout << "��������: " << power << " �.�." << std::endl;
	std::cout << "��� ������������: " << year_prodact << std::endl << std::endl;
}

double Car::Tax_calculation()
{
	return power * tax_rate - year_prodact / tax_rate;
}
