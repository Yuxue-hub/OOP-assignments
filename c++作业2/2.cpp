#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	cout << "���������������߱߳�" << endl;
	int a, b, c;
	cin >> a >> b >> c;
	int s = (a + b + c)/2;
	double t = sqrt(s*(s - a)*(s - b)*(s - c));
	cout << t << endl;

}
