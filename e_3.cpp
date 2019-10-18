#include<iostream>
using namespace std;
int main()
{
	int *p = new int[20], a = 0, b = 0, i = 0;

	while (cin >> p[i])

	{

		i++;

		if (cin.get() == '\n')

			break;

	}
	for (int t = 0; t < i; t++)
	{
		if (p[t] < 0)
			a++;
		if (p[t] > 0)
			b++;
		
	}
		
	cout << "正数个数:" << b << endl;

	cout << "负数个数:" << a << endl;

	delete[]p;
	system("pause");
	return 0;
}