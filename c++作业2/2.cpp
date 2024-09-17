#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	cout << "请输入三角形三边边长" << endl;
	int a, b, c;
	cin >> a >> b >> c;
	int s = (a + b + c)/2;
	double t = sqrt(s*(s - a)*(s - b)*(s - c));
	cout << t << endl;

}
