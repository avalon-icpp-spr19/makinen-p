#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;
/* Упражнение 1
int main()
{
setlocale(0, "");
int a;
cout << "Введите a:" << endl;
cin >> a;

int first = a / 100;
int second = a / 10 % 10;
int third = a % 10;

cout << first + second + third << endl;

}
*/
/*
int main()
{
setlocale(0, "");
int sum1, sum2, sec, min, hr;

cout << "часы, минуты и секунды через пробел соответсвенно:" << endl;
cin >> hr;
cin >> min;
cin >> sec;

sum1 = hr * 3600 + min * 60 + sec;

cout << "часы, минуты и секунды через пробел соответсвенно:" << endl;
cin >> hr;
cin >> min;
cin >> sec;

sum2 = hr * 3600 + min * 60 + sec;

cout << sum2 - sum1 << endl;

}
*/
/* Упражнение 3
int main()
{
setlocale(0, "");
int month, year, day, a, y, m, JDN;

cout << "Введите день, месяц и год через пробел соответственно: " << endl;
cin >> day;
cin >> month;
cin >> year;

a = (14 - month) / 12;
y = year + 4800 - a;
m = month + (12 * a) - 3;

JDN = day + ((153 * m + 2) / 5) + 365 * y + (y / 4) - (y / 100) + (y / 400) - 32045;

cout << JDN;

}
*/
/* Упражнение 4
int main() {
	int time;

	cin >> time;
	cout << time / 3600 % 24 << ":";
	cout << time % 3600 / 60 / 10 << time % 3600 / 60 % 10 << ":";
	cout << time % 60 / 10 << time % 60 % 10;

}
*/
/* Упражнение 5
int main() {
	int N;

	cin >> N;
	cout << N / 2 * 2 + 2;
}
*/
