// mccp-hw03_01.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


class Calculator
{
private:
	double num1, num2;


public:
	Calculator()
	{
		/*this->num1 = num1;
		this->num2 = num2;*/
		set_num1(1);
		set_num2(1);
	}
	double add() {
		return num1 + num2;
	}
	double multiply() {
		return num1 * num2;
	}
	double subtract_1_2() {
		return num1 - num2;
	}
	double subtract_2_1() {
		return num2 - num1;
	}
	double divide_1_2() {
		return num1/ num2;
	}
	double divide_2_1() {
		return num2/ num1;
	}
	bool set_num1(double num1)
	{
		if (num1 != 0) {
			this->num1 = num1;
			return true;
		}
		else
		{
			return false;
		}

	}
	bool set_num2(double num2)
	{
		if (num2 != 0) {
			this->num2 = num2;
			return true;
		}
		else
		{
			return false;
		}
	};
};

int main()
{
	setlocale(LC_ALL, "Russian");
	Calculator calc;
	double num1, num2;
	while (true)
	{
		do
		{
			std::cout << "введите num1\n";
			std::cin >> num1;

			if (!calc.set_num1(num1)) std::cout << "Неверный ввод!" << std::endl;
		} while (!calc.set_num1(num1));

		do
		{
			std::cout << "введите num2\n";
			std::cin >> num2;

			if (!calc.set_num1(num2)) std::cout << "Неверный ввод!" << std::endl;
		} while (!calc.set_num1(num2));


		std::cout << "num1 + num2 = " << calc.add() << std::endl
			<< "num1 * num2 = " << calc.multiply() << std::endl
			<< "num1 - num2 = " << calc.subtract_1_2() << std::endl
			<< "num2 - num1 = " << calc.subtract_2_1() << std::endl
			<< "num1 / num2 = " << calc.divide_1_2() << std::endl
			<< "num2 / num1 = " << calc.divide_2_1() << std::endl;

	}
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
