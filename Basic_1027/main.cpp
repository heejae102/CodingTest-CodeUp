#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std; 

/*

������� ����ϴ� ����� ���󸶴�, ���ĸ��� ���ݾ� �ٸ���.

�����(yyyy.mm.dd)�� �Է¹޾�,

�Ͽ���(dd-mm-yyyy)�� ����غ���.

(��, �� �ڸ� ��/���� 0�� �ٿ� ���ڸ���, �⵵�� 0�� �ٿ� ���ڸ��� ����Ѵ�.)


����
����ϴ� �ڸ����� �����ϱ� ���� %4d�� ���� ������ ����� �� �ִµ�,
��ĭ�� 0���� ����ϱ� ���ؼ��� %04d�� ���� ������ ����ϸ� �ȴ�.

����
printf("%02d-%02d-%04d", d, m, y);


�Է�
������� '.'(��)���� ���еǾ� �Էµȴ�.


���
�������

�Ͽ������� �ٲپ� '-'(�뽬, ���̳ʽ�)�� ������ ����Ѵ�.


�Է� ����
2014.07.15

��� ����
15-07-2014

*/

int main()
{
	int y, m, d;
	char ch; 

	scanf("%d.%d.%d", &y, &m, &d);
	printf("%02d-%02d-%04d", d, m, y);


	cin >> y >> ch >> m >> ch >> d;

	cout.width(2);
	cout.fill('0');
	cout << d << '-';

	cout.width(2);
	cout.fill('0');
	cout << m << '-';

	cout.width(4);
	cout.fill('0');
	cout << y << endl; 

	return 0; 
}