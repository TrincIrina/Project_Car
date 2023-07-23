#pragma once
#include<iostream>
//Класс автомобиль
class Car
{
private:
	std::string state_number;  //гос.номер
	double power;             //мощность автомобиля
	int year_prodact;          //год производства
	static double tax_rate;    //налоговая ставка
public:
	//Конструкторы
	Car() : Car("", 0, 0) {}
	Car(std::string state_num, double pow, int year_prod)
		: state_number{ state_num }, power{ pow }, year_prodact{ year_prod }{}
	//setters & getters
	std::string& State_num(std::string state_num) { return state_number; }
	double& Pow() { return power; }
	int& Year_prod() { return year_prodact; }
	static double& Tax_r() { return tax_rate; }
	//Метод ввода
	void Input();
	//Метод вывода
	void Print();
	//метод расчёта налога на автомобиль
	double Tax_calculation();
};