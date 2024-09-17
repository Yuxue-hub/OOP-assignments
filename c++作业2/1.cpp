#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a, b, c;
	cin >>a>>b>>c;
	int x1, x2, x3;
	if(a==0)
	{
		if (b == 0)
			cout << "´íÎó£¡" << endl;

	}
	x1 = -c / b;

double d = b * b - 4 * a*c;
if (d >= 0)
{
	d = sqrt(d);
	cout<<d<<endl;
	x1 = (-b + d) / (2 * a);
	x2 = (-b - d) / (2 * a);
	cout << "x1=" << x1 << '\t' << "x2=" << x2 << endl;


}
else
{
	d = sqrt(-d);
	x1 = -b / (2 * a);
	x2 = d / (2 * a);
	cout << "x1=" << x1 << "+j*" << x2 << '\t' << "x2=" <<"-j*" << x2 << endl;
}
return 0;
}
