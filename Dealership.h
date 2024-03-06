#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Car.h"

using namespace std;

class Dealership
{
public:
	int index = 0;

	//������ ����� � ������
	vector <Car*> cars;

	//�������� ������ � ������
	void add_car(Car* car) {
		cars.push_back(car);
		index++; 
		//��������� ���������� ����� � ������
		car->set_index(index);
	}

	//������� ������ ��� ������������ ������� �� ������
	void delete_car(int index) {
		//������ ����� � ��������� ���������� �������
		for (int i = index; i < cars.size(); i++) {
			cars[i-1] = cars[i];
			cars[i - 1]->set_index(i);
		}
		// �������� ���������� �������� � ������
		cars.pop_back();
	}

	//������ ������
	void print_pricelist() {
		for (auto car : cars) {
			car->print();
		}
		cout << endl;
	}

};

