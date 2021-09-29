#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double x, a, b, c, F;

	// Вводимо значення змінних
	cout << "Enter a: "; cin >> a;
	cout << "\nEnter b: "; cin >> b;
	cout << "\nEnter c: "; cin >> c;
	cout << "\nEnter x: "; cin >> x;

	// Скорочена форма розгалуження
	if ((x < 5) && (b != 0)) F = a * pow((x + 7), 2) - b;
	if ((x > 5) && (b == 0)) F = (x - c * a) / (a * x);
	else F = x / c;

	// Виведення значення F
	cout << "\nResult 1: " << F;

	// Повна форма розгалуження
	if ((x < 5) && (b != 0)) F = a * pow((x + 7), 2) - b;
	else if ((x > 5) && (b == 0)) F = (x - c * a) / (a * x);
	else F = x / c;

	// Виведення значення F
	cout << "\nResult 2: " << F << endl;

	system("pause");
	return 0;
}