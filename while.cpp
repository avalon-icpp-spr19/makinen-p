#include <iostream>
#include <string>

using namespace std;

//ex.1

//int main()
//{
//	int num = 1;
//	int max, min;
//
//	max = 999999;
//	min = 0;
//
//	while (num != 0)
//	{
//		cin >> num;
//		min = (num < min) ? num : min;
//		max = (num > max) ? num : max;
//	}
//
//	cout << min << ";" << max << endl;
//}

//ex.2

//int main()
//{
//	int S = 0;
//	int num = 1;
//	int max = 0;
//	while (num != 0)
//	{
//		cin >> num;
//
//		S = (num > max) ? 0 : S;
//		max = (num > max) ? num : max;
//		S = (num == max) ? ++S : S;
//	}
//	cout << S << endl;
//}

//ex.3



//ex.4

//int main()
//{
//	int n, counter;
//	counter = 1;
//	cin >> n;
//	while (n > pow(2,counter))
//	{
//		counter += 1;
//	}
//
//	cout << (pow(2, counter)) << endl;
//}


//ex.5

//int main()
//{
//
//	int n;
//	int n1 = 0;
//	int n2 = 1;
//	int n3 = 0;
//	int counter = 0;
//
//	cin >> n;
//
//	if (n == 0) {
//		cout << "0";
//	}
//	else
//	{
//		while (counter < n - 1)
//		{
//			n3 = n1 + n2;
//			n1 = n2;
//			n2 = n3;
//			counter += 1;
//		}
//
//		cout << n2;
//	}
//}
