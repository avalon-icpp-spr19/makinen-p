#include <iostream>
#include "Extention.hpp"

using namespace std;

void RandomArrays(short int birthdays[], int people)
{
	for (int i = 0; i < people; i++)
	{
		birthdays[i] = ext::GetRandomValue(1, 365, false);
	}
}

int main()
{
	int TRIALS;
	int PEOPLE;

	while (true)
	{
		cin >> TRIALS;
		if (TRIALS < 1)
		{
			cout << "ERROR: Increase the amount of trials" << endl;
		}
		else if (TRIALS > 100000)
		{
			cout << "ERROR: Reduce the amount of trials" << endl;
		}
		else
		{
			break;
		}
	}

	cin >> PEOPLE;

	short int* birthdays = new short int[PEOPLE];
	int successfulAttempts = 0;
	float Chance;
	int flag = 0;



	for (int i = 0; i < TRIALS; i++) {
		RandomArrays(birthdays, 87);
		flag = 0;
		for (int z = 0; z < PEOPLE-2 && flag == 0; z++)
		{
			for (int k = z+1; k < PEOPLE-1 && flag == 0; k++)
			{
				for (int l = k + 1; l < PEOPLE && flag == 0; l++)
				{
					if (birthdays[k] == birthdays[l] && birthdays[z] == birthdays[k] && birthdays[l] == birthdays[z])
					{
						successfulAttempts++;
						flag = 1;
					}
				}
			}
		}
	}

	Chance = 100.0*successfulAttempts / TRIALS;

	cout << "After " << TRIALS << " trials, only " << successfulAttempts << " were succesful. Chance: " << Chance << "%." << endl;

	return 0;
}
