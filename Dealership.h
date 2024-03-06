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

	//список машин в салоне
	vector <Car*> cars;

	//добавить машину в список
	void add_car(Car* car) {
		cars.push_back(car);
		index++; 
		//присвоить порядковый номер в списке
		car->set_index(index);
	}

	//удалить машину под определенным номером из списка
	void delete_car(int index) {
		//замена ячеек и изменение порядковых номеров
		for (int i = index; i < cars.size(); i++) {
			cars[i-1] = cars[i];
			cars[i - 1]->set_index(i);
		}
		// удаление последного элемента в списке
		cars.pop_back();
	}

	//печать списка
	void print_pricelist() {
		for (auto car : cars) {
			car->print();
		}
		cout << endl;
	}

};

