#include<iostream>
#include<cmath>

using namespace std;
double shuai( double n)
{
	double m = sqrt(n);
	return m;
}
int main()
{
	
	double a;
	cout << "����һ������ƽ�������� " << endl;
	cin >> a;
	 double b=shuai (a);
	 cout << "�������ƽ��Ϊ��" << b << "" << endl;
	return 0;
}


