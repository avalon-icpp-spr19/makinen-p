#include <iostream>
#include <limits>

using namespace std;

const float pi = 3.14159;
const short int daysPerYear = 365;
const char daysPerWeek = 7;


int main()
{

	int a;
	unsigned int b;
	short int c;
	char d;
	float e;


	a = 0B00000000000000000000000000000000;
	b = 0B11111111111111111111111111111111;
	c = sizeof(long long);
	d = numeric_limits<char>::max();


	int kek = 10;
	short int kek2 = 0xAA;
	double fin = 010;
	char dota = 0B10110100;
	char doom = 'f';
	unsigned int allstars = 25;
	const long long int eul = 46464664;


	unsigned char age;
	float square;
	long long int stars;
	float AvgTemperature;


	float PiCopy = pi;
	short WeeksPerYear = daysPerYear / daysPerWeek;
	setlocale(0, "");
	cout << WeeksPerYear << " Целых недель в году" << endl;

}
