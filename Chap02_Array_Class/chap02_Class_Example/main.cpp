#include "Polynomial.h"
#include "Birthday.h"
#include "Rectangle.h"
#include "SmartHome.h"

/*void swap(int& x, int& y)
{
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
}
*/
int main() {
/*	Polynomial a, b, c;

	a.read();
	b.read();
	c.add(a, b);

	a.display("A = ");
	b.display("B = ");
	c.display("C = A + B = ");


	Student eei[10];
	strcpy_s(eei[2].name, "Sungmin Song");
	eei[2].bDay.month = 8;
	eei[2].bDay.date = 17;
	printf("�̸��� : %s, %d�� %d�� ���Դϴ�. \n", eei[2].name, eei[2].bDay.month, eei[2].bDay.date);

	int a = 1, b = 2;
	printf("a = %d, b = %d\n", a, b);
	swap(a, b);
	printf("a = %d, b = %d", a, b);


	return 0;
		*/
	Rectangle r1(4, 5);
	printf("rectange 1 Area : %f\n", r1.getArea());				// printf ���
	std::cout << "Rectangle 1 ARea : " << r1.getArea() << std::endl;// iostream�� cout ���

	SmartHome myHome("ȫ�浿", 23, 40, true);
	myHome.printStatus();
	myHome.setHumidity(60);
	myHome.setSecurity(false);
	myHome.printStatus();
}
