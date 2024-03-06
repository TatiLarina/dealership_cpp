#pragma once

#include <iostream>
#include <string>

using namespace std;

//�����-��������
class Car
{
private:
	int index, price;
	string model, color;

public:
	Car() {}

	Car(string model, string color, int price): model { model }, color { color }, price { price } {}

	void set_index(int index) {
		this->index = index;
	}

	int get_index() {
		return index;
	}

	virtual void print() {
		cout << index << " " << model << " " << color << " " << price << " �." << endl;
	}

};

//��������� 1
class Passenger�ar : public Car {
private:
	string body, transmission;

public:
	Passenger�ar() {}
	Passenger�ar(string model, string color, int price, string body, string transmission): Car { model, color, price }, 
		body { body }, transmission { transmission } {}

	void print() override {
		Car::print();
		cout << "���: ��������" << endl;
		cout << "- ��� ������: " << body << endl;
		cout << "- ��� �����������: " << transmission << endl;
	}
};

//��������� 2
class Truck : public Car {
private:
	int tonnage;
	string cargo_pod;

public:
	Truck() {}
	Truck(string model, string color, int price, int tonnage, string cargo_pod) : Car{ model, color, price },
		tonnage{ tonnage }, cargo_pod{ cargo_pod } {}

	void print() override {
		Car::print();
		cout << "���: ��������" << endl;
		cout << "- ����������������: " << tonnage << " �." << endl;
		cout << "- ��� ��������� ������: " << cargo_pod << endl;
	}
};

//��������� 3
class Bus : public Car {
private:
	int passenger_capacity;

public:
	Bus() {}
	Bus(string model, string color, int price, int passenger_capacity) : Car{ model, color, price },
		passenger_capacity{ passenger_capacity } {}

	void print() override {
		Car::print();
		cout << "���: �������" << endl;
		cout << "- ��������������������: " << passenger_capacity << " �������" << endl;
	}
};
