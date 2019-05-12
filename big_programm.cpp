#include <ctime>
#include <cstdlib>
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
	int TRIALS, z;
	cin >> TRIALS;
	while (z = 0)
	{
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
			z = 1;
		}
	}
	short int birthdays[23];
	int successfulAttempts = 0;
	float Chance;
	int flag = 0;


	
	for (int i = 0; i < TRIALS; i++) {
		RandomArrays(birthdays, 23);
		flag = 0;
			for (int k = 0; k < 22 && flag == 0; k++)
			{
				for (int l = k + 1; l < 23 && flag == 0; l++)
				{
					if (birthdays[k] == birthdays[l])
					{
						successfulAttempts++;
						flag = 1;
					}
				}
				
			}
	}

	Chance = 100.0*successfulAttempts / TRIALS;

	cout << "After " << TRIALS << " trials, only " << successfulAttempts << " were succesful. Chance: " << Chance << "%." << endl;
	}
