#include<stdio.h>
#include<iostream>
#include<iomanip>
using namespace std;

/*

�Ǽ���(float)�� ������ �����ϰ� �� ������ �Ǽ����� ������ ��
����Ǿ� �ִ� �Ǽ����� ����غ���.

����
float x;
scanf("%f", &x);
printf("%f", x);

�� ���� ������� �����ϴ�.

�Է� ����
1.414213

��� ����
1.414213

�Ҽ��� �Ʒ� 6�ڸ� ������ ����ؾ� ��. 

*/

int main()
{
	float num;

	scanf_s("%f", &num);
	printf("%f", num);

	cin >> num;
	cout << fixed << setprecision(6) << num << endl; 

	//fixed ���� setprecision�� ����ϸ� ������ ��ü �ڸ����� ����
	//fixed�� �Բ� setprecision ���� �� �Ҽ��� �Ʒ��� �ڸ����� ���� 

	return 0; 
}