#include <iostream>
#include <string>

using namespace std;

//Упражнение 1

//int main() 
//{
//
//	int N;
//	int counter = 0;
//	cin >> N;
//
//	for (int i = 100; i <= 999; i++)
//	{
//		if (((i % 10) + ((i / 10) % 10) + (i / 100)) == N)
//		{
//			counter += 1;
//		}
//	}
//	cout << counter;
//}

//Упражнение 2

//int main()
//{
//	string line;
//	getline(cin, line);
//	int len = line.size();
//
//	cout << "+";
//
//	for (int i = 0; i <= len+1; ++i)
//	{
//		cout << "-";
//	}
//
//	cout << "+" << endl;
//
//	cout << "| " << line << " |" << endl;
//
//	cout << "+";
//
//	for (int i = 0; i <= len+1; ++i)
//	{
//		cout << "-";
//	}
//
//	cout << "+" << endl;
//}


//ex 3

//int main()
//{
//
//	int n;
//	cin >> n; 
//
//	for (int i = 0; i < n - 1; ++i)
//	{
//		for (int j = 1; j <= n; ++j)
//		{
//			j += i % 2;
//				if (j % 2 == 0)
//				{
//					cout << "#";
//				}
//				else
//				{
//					cout << ".";
//				}
//				j -= i % 2;
//		}
//		cout << endl;
//	}
//
//}

//ex 4

//int main()
//{
//	int n;
//	cin >> n;
//
//	for (int i = 1; i <= n*2; i=i+2)
//	{
//		for (int j = 1; j <= i; ++j)
//		{
//			cout << "#";
//		}	
//		cout << endl;
//	}
//	
//
//	for (int k = n*2-3; k >= 0; k = k - 2)
//	{
//		for (int l = 1; l <= k; ++l)
//		{
//			cout << "#";
//		}
//		cout << endl;
//	}
//}

