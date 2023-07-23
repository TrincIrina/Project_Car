#pragma once
#include<iostream>
//����� ����������
class Car
{
private:
	std::string state_number;  //���.�����
	double power;             //�������� ����������
	int year_prodact;          //��� ������������
	static double tax_rate;    //��������� ������
public:
	//������������
	Car() : Car("", 0, 0) {}
	Car(std::string state_num, double pow, int year_prod)
		: state_number{ state_num }, power{ pow }, year_prodact{ year_prod }{}
	//setters & getters
	std::string& State_num(std::string state_num) { return state_number; }
	double& Pow() { return power; }
	int& Year_prod() { return year_prodact; }
	static double& Tax_r() { return tax_rate; }
	//����� �����
	void Input();
	//����� ������
	void Print();
	//����� ������� ������ �� ����������
	double Tax_calculation();
};