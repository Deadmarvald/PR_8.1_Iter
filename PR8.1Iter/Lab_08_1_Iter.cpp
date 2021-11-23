// Lab_08_1_Iter.cpp
// Вольвенко Іван
// Лабораторна робота № 8.1(Iter)
// Пошук та заміна символів у літерному рядку
// Варіант 13

#pragma warning(disable : 4996)
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int Count(char* str)
{
	if (strlen(str) < 3)
		return -1;
	int k = 0;
	for (int i = 1; str[i + 1] != 0; i++)
		if (str[i - 1] == '!' && str[i] == '!' && str[i + 1] == '!')
			k++;
	return k;
}

char* Change(char* str)
{
	size_t len = strlen(str);

	char* tmp = new char[len*2/1+1];
	char* t = tmp;

	tmp[0] = '\0';

	size_t i = 0;

	while (i < len && str[i + 2] != 0)
	{
		if (str[i] == '!' && str[i + 1] == '!' && str[i + 2] == '!')
		{
			strcat(t, "**");
			t += 2;
			i += 3;
		}
		else
		{
			*t++ = str[i++];
			*t = '\0';
		}
	}
	*t++ = str[i++];
	*t++ = str[i++];
	*t = '\0';

	strcpy(str, tmp);

	return tmp;
}

int main()
{
	char str[228];

	cout << "Enter String:" << endl;
	cin.getline(str, 227);

	if (Count(str) == -1)
		cerr << "Enter more characters" << endl;
	else
	{
		cout << "String conteined " << Count(str) << " groups of '!!!'" << endl;

		char* dest = new char[228];
		dest = Change(str);

		cout << "Modified string (param): " << str << endl;
		cout << "Modified string (result): " << dest << endl;
	}

	return 0;
}