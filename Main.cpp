#include <iostream>
using namespace std;

long long int НСК(int num1, int num2, long long int i = 1) {
	if (i % num1 == 0 && i % num2 == 0) return i;
	else return НСК(num1, num2, ++i);
}
long long int НСД(int num1, int num2, long long int i = 1) {
	if (num1 % i == 0 && num2 % i == 0) return i;
	else return НСД(num1, num2, --i);
}

int main() {
	system("chcp 1251>nul");
	int num1, num2;
	cout << "Введiть цiле число #1: "; cin >> num1;
	cout << "Введiть цiле число #2: "; cin >> num2;

	cout << "\nНайменше спільне кратне чисел дорівнює: "
		<< НСК(num1, num2, 1) << endl;

	cout << "\nНайбільший спільний дільник чисел дорівнює: "
		<< НСД(num1, num2, (num2 < num1 ? num1 : num2)) << endl;
}


/*
НСК і НСД
Написати рекурсивну функцію обчислення найбільшого спільного дільника
двох цілих чисел. А також функцію для обчислення найменшого спільного
кратного.
*/
