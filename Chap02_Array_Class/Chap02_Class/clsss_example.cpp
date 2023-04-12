# include "sports_car.h"

int main()
{
	//Car	yourCar;
	Car yourCar(100, "your car", 4);
	yourCar.display();
	yourCar.whereAmI();
	yourCar.gear = 5;
	yourCar.display();
	yourCar.changeGear(3);
	yourCar.display();

	SportsCar myCar;
	myCar.setTurbo(true);
	myCar.speedUp();
	myCar.display();
	myCar.speedUp();
	myCar.whereAmI();
	myCar.display();



	return 0;



};