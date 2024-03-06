#include "Car.h"
#include "Dealership.h"

using namespace std;

int main() {

	//создаем машины
	PassengerСar car1 = PassengerСar("Creta", "красный", 1400000, "универсал", "электрическая");
	Truck car2 = Truck("Грузовик", "зеленый", 1400000, 10000, "контейнер");
	Bus car3 = Bus("ПАЗ", "желтый", 1400000, 30);

	//создаем салон
	Dealership dealership;

	//добавляем машины в салон
	dealership.add_car(&car1);
	dealership.add_car(&car2);
	dealership.add_car(&car3);
	
	//печатаем список
	dealership.print_pricelist();

	//удаляем машину 2 из салона
	dealership.delete_car(2);
	//печатаем список
	dealership.print_pricelist();

	return 0;
}