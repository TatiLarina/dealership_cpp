#include "Car.h"
#include "Dealership.h"

using namespace std;

int main() {

	//������� ������
	Passenger�ar car1 = Passenger�ar("Creta", "�������", 1400000, "���������", "�������������");
	Truck car2 = Truck("��������", "�������", 1400000, 10000, "���������");
	Bus car3 = Bus("���", "������", 1400000, 30);

	//������� �����
	Dealership dealership;

	//��������� ������ � �����
	dealership.add_car(&car1);
	dealership.add_car(&car2);
	dealership.add_car(&car3);
	
	//�������� ������
	dealership.print_pricelist();

	//������� ������ 2 �� ������
	dealership.delete_car(2);
	//�������� ������
	dealership.print_pricelist();

	return 0;
}