/* Задание 1
Объявите массив для хранения 10-ти целочисленных элементов
Объявите константный массив для хранения 20-ти вещественных элементов
Объявите массив для хранения 2-х символьных элементов

int arr1[10];
const float arr2[20] = {};
char arr3[2];

Пусть есть массив объявленный следующим образом:
int data[6] = { 2, 4, 8, 16, 32, 64 };
Какой размер имеет данный массив?
6
Данные какого типа он хранит
int
Чему равен элемент массива с индексом 0?
2
Чему равен элемент массива с индексом 3?
16
Какой индекс у элемента 8?
2
Какой индекс у элемента 32?
4
Присвойте первому элементу массива значение 1.
data[0] = 1;
Утройте значение последнего элемента в массиве.
data[6] = data[6] * 3;
Выведите элементы массива на экран через пробел.
for (int i = 0; i < 6; i++)
{
cout << data[i] << " ";
}
Объявите массив для хранения 5-ти элеменов любого типа и проинизиализируете его с помощью списка инициализации
int data2[5] = {1, 2, 3, 4, 5};
Выведите объявленный массив на экран.
for (int i = 0; i < 5; i++)
{
cout << data2[i] << " ";
}
Можно ли не указывать размер массива при его создании?
Да
Если можно, то продемострируйте это.
int data3[] = {1,1,1,1};
Пусть массив объявили следующим образом:
int data[5] = { 1, 2 };
Каков размер данного массива?
5
Чему равен элемент с индексов 1? Чему равен элемент с индексом 2?
[1] - 2, [2] - 0
Проверьте ответы с помощью дебагера.
done :)
Выведите все элементы массива на экран.
for (int i = 0; i < 5; i++)
{
cout << data3[i] << " ";
}
Пусть массив объявлен следующим образом:
const char alpha[3] = { 'a', 'b', 'c' }
Каков размер данного массива?
3
Чему равен элемент с индексов 0? Чему равен индекс у элемента 'c'
[0] - 'a'; c - [2]
Допустимы ли следующие выражения:
alpha[0]; da
alpha[3]; прога заработает, но результат будет ужасающим. такое не развидеть.
alpha[1] = 'd'; net - eto const array
alpha[1] = 'b'; net - eto const array
Выведите все элементы массива на экран.
for (int i = 0; i < 3; i++)
{
cout << alpha[i] << " ";
}
*/

/*
Задание 2
int main()
{
int counter = 0;
int result = 0;
int arr[20];

for (int i = 0; counter < 20; i++)
{
counter++;
arr[counter] = i + 1;
cout << arr[counter] << " ";
}

cout << endl;
counter = 0;


for (int i = 2; counter < 20; i = i + 2)
{
counter++;
arr[counter] = i;
cout << arr[counter] << " ";
}

cout << endl;
counter = 0;
arr[0] = 1;
cout << arr[0] << " ";
for (int i = 1; i < 20; i++)
{

arr[i] = arr[i-1] * 2;

cout << arr[i] << " ";

}

cout << endl;

for (int i = 1; i < 20; i++)
{

}

}
*/

/* Задание 3
int main()
{
int max = -11;
int lessThanZero = 0, equalToZero = 0, moreThanZero = 0;
int sum = 0;
int max_index = 0;
int data[10];
for (int i = 0; i < 10; ++i)
{
data[i] = ext::GetRandomValue(-10, 10, true);
cout << data[i] << " ";
if (data[i] > max)
{
max = data[i];
max_index = i;
}
}
cout << endl;
cout << "data" << "[" << max_index << "] = " << max << endl;
cout << "---------------" << endl;
int data2[100];
for (int i = 0; i < 100; ++i)
{
data2[i] = ext::GetRandomValue(-100, 100, true);
sum += data2[i];
if (data[i] < 0)
{
lessThanZero++;
}
else if (data2[i] > 0)
{
moreThanZero++;
}
else
{
equalToZero++;
}


}
cout << "sum = " << sum << endl << "< 0: " << lessThanZero << endl << "> 0: " << moreThanZero << endl << "= 0: " << equalToZero << endl;
cout << "---------------" << endl;
int data3[100];
for (int i = 0; i < 100; ++i)
{
data3[i] = ext::GetRandomValue(1, 100, true);
cout << data3[i] << ";";

}
*/
//Упражнение 4
//
//int main() {
//	char abc[100];
//	char All_letters[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
//	'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
//
//	for (int i = 0; i < 100; ++i) abc[i] = GetRandomValue('a', 'z');
//	for (int i = 0; i < 100; ++i) cout << abc[i];
//
//	cout << endl;
//
//	for (int i = 0; i < 26; ++i)
//	{
//		cout << All_letters[i] << " | ";
//		for (int j = 0; j < 100; ++j)
//		{
//			if (abc[j] == All_letters[i]) cout << "*";
//		}
//		cout << endl;
//	}
//	cout << endl;
//}
