/*
Задание №1
Написать функцию, которая выводит в консоль кубы первых 10 натуральных чисел.
Довавьте в написанную функию параметр n, чтобы она выводила кубы n первых первых натуральных чисел. 
int cubes(int n)
{
	for (int i = 1; i < n+1; i++)
	{
		cout << pow(i, 3) << endl;

	}
	return 0;
}

int main()
{
	int kek;
	cin >> kek;
	cubes(kek);
}
Задание №2
Напишите функцию, которая вычисляет объем цилиндра.
Ее параметрами должны быть радус и высота, которые вводятся с клавиатуры.
const long double pi = 3.141592653589793238462643383279502884L;
float CylinderVolume(float h, float r)
{
	float Volume;
	Volume = pow(r, 2) * h * pi;
	return Volume;
}


int main()
{
	float h, r;

	cin >> h >> r;

	cout << CylinderVolume(h, r) << endl;
}
Задание №3
Напишите функцию min(a, b), вычисляющую минимум двух чисел.
Затем напишите функцию min4(a, b, c, d), вычисляющую минимум 4 чисел с помощью функции min.
Считайте четыре целых числа из консоли и выведите их минимум.
Тестовые данные				Ожидаемый результат
1 2 3 4						1
4 3 2 1						1
9 5 1 7						1
7 3 5 9						3
int min(int a, int b)
{
	int minimal;
	if (a < b)
	{
		minimal = a;
	}
	else
	{
		minimal = b;
	}
	return minimal;
}

int min4(int a,int b,int c,int d)
{
	int minimal;
	minimal = min(min(a, b), min(c, d));
	return minimal;
}

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	cout << min4(a,b,c,d) << endl;
}
Задание №4
Добавить в проект файл Date.hpp
Реализовать функции которые объявлены в файле Date.hpp
При выполнении задания можно использовать свои вспомогательные функции.
Продемонстрировать работы всех написанных функций в main().
