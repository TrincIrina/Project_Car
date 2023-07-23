#include "Car.h"


void Car::Input()
{
	std::cout << "Введите гос. номер автомобиля: "; std::cin >> state_number;
	std::cout << "Введите мощность автомобиля: "; std::cin >> power;
	std::cout << "Введите год производства автомобиля: "; std::cin >> year_prodact;
}

void Car::Print()
{
	std::cout << "Гос. номер автомобиля: " << state_number << std::endl;
	std::cout << "Мощность: " << power << " л.с." << std::endl;
	std::cout << "Год производства: " << year_prodact << std::endl << std::endl;
}

double Car::Tax_calculation()
{
	return power * tax_rate - year_prodact / tax_rate;
}
