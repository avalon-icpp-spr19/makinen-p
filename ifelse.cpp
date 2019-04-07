#include <iostream>

using namespace std;

//Упражение 1

//int main() {
//	setlocale(0, "");
//	int a, b, c;
//	
//	cin >> a;
//	cin >> b;
//	cin >> c;
//
//	if (((a+b) > c) && ((a+c) > b) && ((b+c)>a))
//	{
//		cout << "Да";
//	}
//	else
//	{
//		cout << "Нет";
//	}
//
//}

//Упражение 2

//int main() {
//	setlocale(0, "");
//	int n;
//
//	cin >> n;
//
//	if (n % 10 == 1) {
//		cout << "рубль";
//	}
//	else if ((n % 10 >= 2) && (n % 10 <= 4)) {
//		cout << "рубля";
//	}
//	else if ((n % 100 >= 11) && (n % 100 <= 20)) {
//		cout << "рублей";
//	}
//	else {
//		cout << "рублей";
//	}
//}

//Упражение 3

//int main() {
//	bool enemyInFront; cin >> enemyInFront;
//	bool isBoss; cin >> isBoss;
//	int robotHealth; cin >> robotHealth;
//	bool shouldFire = true;
//	if (enemyInFront | (enemyInFront && robotHealth > 100 && isBoss))
//	{
//		if (robotHealth < 50 && isBoss) shouldFire = false;
//	}
//	else
//	{
//		shouldFire = false;
//	}
//	if (shouldFire) cout << "Fire" << endl;
//}

//Упражение 4

//int main() {
//	int a, b, c;
//
//	cin >> a;
//	cin >> b;
//	cin >> c;
//
//	if (a > b)
//	{
//		if (b > c)
//		{
//			cout << c;
//		}
//		else if (a > c)
//		{
//			cout << a;
//		}
//	}
//	else
//	{
//		cout << b;
//	}
//}

//Упражнение 6

//int main() {
//	int x1, y1, x2, y2;
//
//	cin >> x1;
//	cin >> y1;
//	cin >> x2;
//	cin >> y2;
//
//	int x = x1 - x2;
//	int y = y1 - y2;
//
//	if (x != 0 && y != 0) {
//		if (x == y || x == -y) {
//			cout << "true";
//		}
//		else {
//			cout << "false";
//		}
//	}
//	else if (x != 0 || y != 0) {
//		cout << "true";
//	}
//	else {
//		cout << "false";
//	}
//}
