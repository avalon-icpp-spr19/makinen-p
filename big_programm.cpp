#include <iostream>
#include <windows.data.json.h>
#include <fstream>
#include "Extention.hpp"
#include "json.hpp"

using namespace std;
using namespace nlohmann;

struct birthdate
{
	int day;
	int month;
};

void RandomArrays(birthdate birthdays[], int people)
{
	for (int i = 0; i < people; i++)
	{
		birthdays[i].month = ext::GetRandomValue(1, 12, false);

	}
}

void RandomArraysDays(birthdate birthdays[], int people)
{
	for (int z = 0; z < people; z++)
	{
		if (birthdays[z].month == 2)
		{
			birthdays[z].day = ext::GetRandomValue(1, 28, false);
		}
		else if ((birthdays[z].month % 2 != 0 && birthdays[z].month < 8) || (birthdays[z].month % 2 == 0 && birthdays[z].month > 7))
		{
			birthdays[z].day = ext::GetRandomValue(1, 31, false);
		}
		else
		{
			birthdays[z].day = ext::GetRandomValue(1, 30, false);
		}
	}

}

int main()
{



	json dates;
	//int TRIALS;
	int PEOPLE;
	int days, months;
	int counter;
	
	ofstream log_file("H:\\Visual Studio 2017\\Projects\\Project5\\Debug\\hidden\\log.txt", ios::app);
	ifstream counter_file_in("H:\\Visual Studio 2017\\Projects\\Project5\\Debug\\hidden\\counter.txt");

	counter_file_in >> counter;

	ifstream days_file("H:\\Visual Studio 2017\\Projects\\Project5\\Debug\\hidden\\date.json");
	days_file >> dates;

	days = dates["day"];
	months = dates["month"];


	//while (true)
	//{
	//	cin >> TRIALS;
	//	if (TRIALS < 1)
	//	{
	//		cout << "ERROR: Increase the amount of trials" << endl;
	//	}
	//	else if (TRIALS > 100000)
	//	{
	//		cout << "ERROR: Reduce the amount of trials" << endl;
	//	}
	//	else
	//	{
	//		break;
	//	}
	//}

	cin >> PEOPLE;

	birthdate* birthdays = new birthdate[PEOPLE];
	int successfulAttempts = 0;
	int trialsCounter = 0;
	float Chance;
	bool success;
	int flag = 0;


	for (int i = 0; i < 10000; i++) {
		RandomArrays(birthdays, PEOPLE);
		RandomArraysDays(birthdays, PEOPLE);
		flag = 0;
		
		trialsCounter++;


		//for (int z = 0; z < PEOPLE-2 && flag == 0; z++)
		//{	
			for (int k = 0; k < PEOPLE-1 && flag == 0; k++)
			{
				for (int l = k + 1; l < PEOPLE && flag == 0; l++)
				{
					if ((birthdays[k].day == birthdays[l].day && birthdays[l].month == birthdays[k].month) && (birthdays[k].day == days && birthdays[k].month == months)
						&& (birthdays[l].day == days && birthdays[l].month == months)/*(birthdays[k].day == birthdays[z].day && birthdays[z].month == birthdays[k].month) &&
						(birthdays[z].day == birthdays[l].day && birthdays[l].month == birthdays[z].month))*/)
						{
							successfulAttempts++;
							flag = 1;
							success = true;
							k = PEOPLE - 1;
							l = PEOPLE;
							i = 10000;
							ofstream counter_file_out("H:\\Visual Studio 2017\\Projects\\Project5\\Debug\\hidden\\counter.txt");
							log_file << counter << ": " << days << " " << months << endl;

							counter_file_out << counter + 1 << endl;
							counter_file_out.close();
							break;
							

						}
					else
					{
						ofstream counter_file_out("H:\\Visual Studio 2017\\Projects\\Project5\\Debug\\hidden\\counter.txt");
						log_file << counter << ": Nan" << endl;
						counter_file_out << counter + 1 << endl;
						counter_file_out.close();
						success = false;
					}
				}
			}
		/*}*/

	}

	//Chance = 100.0*successfulAttempts / TRIALS;

	cout << "Successful on " << trialsCounter << " attempt." << endl;

	
	//cout << "After " << TRIALS << " trials, only " << successfulAttempts << " were succesful. Chance: " << Chance << "%." << endl;

	return 0;
}
