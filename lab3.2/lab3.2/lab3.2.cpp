#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double x, a, b, c, F;

	// ������� �������� ������
	cout << "Enter a: "; cin >> a;
	cout << "\nEnter b: "; cin >> b;
	cout << "\nEnter c: "; cin >> c;
	cout << "\nEnter x: "; cin >> x;

	// ��������� ����� ������������
	if ((x < 5) && (b != 0)) F = a * pow((x + 7), 2) - b;
	if ((x > 5) && (b == 0)) F = (x - c * a) / (a * x);
	else F = x / c;

	// ��������� �������� F
	cout << "\nResult 1: " << F;

	// ����� ����� ������������
	if ((x < 5) && (b != 0)) F = a * pow((x + 7), 2) - b;
	else if ((x > 5) && (b == 0)) F = (x - c * a) / (a * x);
	else F = x / c;

	// ��������� �������� F
	cout << "\nResult 2: " << F << endl;

	system("pause");
	return 0;
}