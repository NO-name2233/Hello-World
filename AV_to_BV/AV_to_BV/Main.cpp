#include<string>
#include<iostream>
#include"AV_to_BV.h"
#include"BV_to_AV.h"
using namespace std;
int main()
{
	int request;
	while (true)
	{
		cout << "AVת��BV����BVת��AV��AV-->BV����1��BV-->AV����2��\n";
		cin >> request;
		if (request == 1)
		{
			long long InputAV;
			cout << "������AV�ţ�\n";
			cin >> InputAV;
			AV_to_BV AVnumber;
			AVnumber.BVnum(InputAV);
		}
		else if (request == 2)
		{
			char BVnum[12];
			cout << "������BV�ţ�\n";
			cin >> BVnum;
			BV_to_AV BVnumber;
			long long AV = BVnumber.AVNum(BVnum);
			cout << AV<<endl;
		}

	}	
	return 0;
}