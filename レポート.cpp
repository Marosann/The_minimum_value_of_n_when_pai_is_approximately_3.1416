#include<iostream>
#include<ctime>
#include <stdio.h>
#include <cmath>


using namespace std;

// �Фα�ʾʽ
double Sum0(int n) {


	int a = 0;

	double b = 0.0;

	double c = 0.0;

	double Sn = 0.0;
	double Sum = 0.0;

	for (int i = 0; i <= n; i++)
	{

		a = pow(-1, i);
		b = 2 * i + 1;
		c = 4 / b;
		Sn = a * c;
		Sum += Sn;



	}


	return Sum;



}



int main() {
	//n�΂�����ڻ�����
	int n = 0;
	//��������ФΥ��������
	int count = 0;
	//�����С����������������Σ��ӛ�h����ե饰
	int flag = 0;

	//�����������50000���󤭤��ȡ��ե饰�򥢥��ȥץå�
	while (count < 50000) {

		double Sum = Sum0(n);

		if (3.14155 < Sum && Sum< 3.14165)
		{
			count++;

			if (flag == 0) {


				flag = n;

			}

		}
		else
		{
			count = 0;

			flag = 0;
		}

		n++;

	}



	cout << "flag :  " << flag << endl;

	cout << "Sum:  " << Sum0(n) << endl;

	cout << "count :  " << count << endl;

	cout << "n :  " << n << endl;
	
	system("pause");

	return 0;

}