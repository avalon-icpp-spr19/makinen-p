//Задание №1
//Создать структуру Point, содержащую два поля x, y типа float.
//Создать и проинициализировать переменную типа Point.
//Создать переменную типа Point и проинициализировать ее данными с клавиатуры.
//Вывести на экран значения x, y вышеобъявленных переменных.
//Написать программу, которая определеяет принадлежит ли заданная точка кругу заданного радиуса.
//Координаты точки и радиус пользователь вводит с клавиатуры.
//Для хранения координат точки использовать структуру Point.
//Написать программу, которая по двум заданным точкам - концам отрезка находит точку середины отрезка.
//Координаты точек пользователь вводит с клавиатуры.
//Для хранения координат точек использовать структуру Point.
//Рассчитанную точку середины отрезка также хранить как структуру Point.
//Вывести координаты полученной точки в консоль.

struct Point 
{
	float x;
	float y;
};


int main()
{
	int r;
	setlocale(0, "");
	Point tochka;
	cin >> tochka.x;
	cin >> tochka.y;

	cout << "x=" << tochka.x << " y=" << tochka.y << endl;
	cin >> r;
	if ((tochka.x * tochka.x) + (tochka.y * tochka.y) > r)
	{
		cout << "Точка не принадлежит окружности";
	}
	else
	{
		cout << "Точка принадлежит окружности";
	}

	Point line_point1;
	Point line_point2;
	Point middle;

	cin >> line_point1.x;
	cin >> line_point1.y;
	cin >> line_point2.x;
	cin >> line_point2.y;

	middle.x = (line_point1.x - line_point2.x) / 2;
	middle.y = (line_point1.y - line_point2.y) / 2;

	cout << middle.x << ";" << middle.y << endl;
}

//Задание №2
//Создать структуру Circle, содержащую одно поле типа int - радиус и второе поле типа Point - центр окружности.
//Создать и проинициализировать переменную типа Circle.
//Создать переменную типа Circle и проинициализировать ее данными введенными с клавиатуры.
//Вывести на экран данные, сохраненные в вышеобъявленных переменных.
//Даны две переменные типа Circle.
//Написать программу, которая определяет пересекаются ли окружности,
//описанные данными переменными.

struct Point
{
	int x;
	int y;
};
struct Circle
{
	int radius;
	Point center;
};



int main()
{
	Circle krug1;
	Circle krug2;
	int len;
	setlocale(0, "");

	cin >> krug1.radius;
	cin >> krug1.center.x;
	cin >> krug1.center.y;

	cin >> krug2.radius;
	cin >> krug2.center.x;
	cin >> krug2.center.y;

	len = sqrt(pow((krug1.center.x - krug2.center.x), 2) + pow((krug1.center.y - krug2.center.y), 2));

	if (krug1.radius + krug2.radius < len)
	{
		cout << "Пересекаются";
	}
	else
	{
		cout << "Не пересекаются";
	}

}
