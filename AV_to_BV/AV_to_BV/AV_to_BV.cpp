#include "AV_to_BV.h"
#include<string>
#include<cstring>
#include<iostream>
using namespace std;


double AV_to_BV::ToBinary(long long a)
{
	 double Result=0;
	long long eachNum = 0;
	 double i = 1;
	while (a != 0)
	{
		eachNum= a % 2;
		a /= 2;
		Result = Result+(double)(eachNum * i);
		i =i* 10;
	} ;
	return Result;
}//ʮ����תΪ������

double AV_to_BV::ToDecimalism(long long a)
{
	long long i = 0, Eachnumber = 0,result=0;
	while (a!=0)
	{
		Eachnumber = a % 10;
		a /= 10;
		result += Eachnumber * pow(2, i);
		i++;
	}
	return 0;
}//������תΪʮ����

char AV_to_BV::EachWordExchange(long long a)
{
	char base58[]{ "fZodR9XQDSUm21yCkr6zBqiveYah8bt4xsWpHnJE7jL5VG3guMTKNPAwcF" };
	char b = base58[a];
	return b;
}//base58

void AV_to_BV::BVnum(long long InputAV)
{
	long long AfterXor_Decimalism = InputAV ^ 177451812;//���������ʮ����ֵ
	long long CirculationNum = AfterXor_Decimalism + 100618342136696320;
	char BVnum[10];//����base58ת��ǰ���ַ�
	long long EachWord;
	for (long long i = 0; i < 10; i++)
	{
		//CirculationNum����58��i�η���ȥ��������ֵ��ȡģ58
		long long square = pow(58, i);
		long long BeforeMod = CirculationNum / square;//ȡģ֮ǰ
		EachWord = BeforeMod % 58;
		BVnum[i] = EachWordExchange(EachWord);//���ظ���base58����ת�����ֵ,δ��������
	}
	char TrueBVnum[11]{ BVnum[6],BVnum[2], BVnum[4], BVnum[8], BVnum[5] ,BVnum[9], BVnum[3], BVnum[7], BVnum[1],BVnum[0],'\0' };
	//                                0   1             2                 3               4                 5               6             7            8             9                10            11                          ��������
	cout << "BV" << TrueBVnum<<endl;
}







